#include "MIDIUSB.h"

// ---------------------------------------------------------------------------
// LED ACTIVITY SYSTEM (Teensy Onboard LED = Pin 13)
// ---------------------------------------------------------------------------
const int ledPin = 13;
unsigned long ledOffTime = 0;
int currentBrightness = 0;

// expressive LED fade timing
const int fadeDuration = 60; // ms
const int pulseDuration = 30;

// For testing/debug
int period = 1500;
unsigned long time_now = 0;
unsigned long time_now1 = 0;
bool serialDebug = false;

// forward declarations
void parse(midiEventPacket_t rx);

void setup()
{
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, LOW);

  if (serialDebug)
  {
    Serial.begin(9600);
  }

  setupAudio();
}

void loop()
{
  readUSB();
  // testYourself();

  // fade-out logic
  if (ledOffTime > 0 && millis() > ledOffTime)
  {
    currentBrightness = 0;
    analogWrite(ledPin, currentBrightness);
    ledOffTime = 0;
  }
}

// ---------------------------------------------------------------------------
// Read MIDI packets from USB
// ---------------------------------------------------------------------------
void readUSB()
{
  midiEventPacket_t rx = MidiUSB.read();
  if (rx.header != 0)
  {
    // expressive LED reaction
    handleLED(rx);

    // your existing MIDI parser
    parse(rx);
  }
}

// ---------------------------------------------------------------------------
// MIDI → LED expressive behavior
// ---------------------------------------------------------------------------
void handleLED(const midiEventPacket_t &rx)
{
  byte type = rx.byte1 & 0xF0; // high nibble = message type
  byte note = rx.byte2;
  byte vel  = rx.byte3;

  switch (type)
  {
    case 0x90: // NoteOn
      if (vel > 0)
      {
        // velocity → LED brightness (scale 0-127 → 0-255)
        currentBrightness = map(vel, 0, 127, 10, 255);
        analogWrite(ledPin, currentBrightness);
        ledOffTime = millis() + fadeDuration;
      }
      else
      {
        // NoteOn with vel 0 = NoteOff
        analogWrite(ledPin, 180);
        ledOffTime = millis() + pulseDuration;
      }
      break;

    case 0x80: // NoteOff
      analogWrite(ledPin, 150);
      ledOffTime = millis() + pulseDuration;
      break;

    case 0xB0: // CC
      // CC values → brightness map
      currentBrightness = map(vel, 0, 127, 20, 200);
      analogWrite(ledPin, currentBrightness);
      ledOffTime = millis() + fadeDuration;
      break;

    case 0xF0: // realtime (clock, start, stop)
    case 0xF8:
      // subtle heartbeat pulse
      analogWrite(ledPin, 40);
      ledOffTime = millis() + 10;
      break;

    default:
      // generic MIDI event pulse
      analogWrite(ledPin, 80);
      ledOffTime = millis() + 20;
      break;
  }
}

// ---------------------------------------------------------------------------
// Test mode: self-play without OP-Z
// ---------------------------------------------------------------------------
void testYourself()
{
  if (millis() > time_now + period)
  {
    time_now = millis();
    d_onNote(44);
  }

  if (millis() > time_now + 300)
  {
    time_now1 = millis();
    d_offNote(44);
  }
}
