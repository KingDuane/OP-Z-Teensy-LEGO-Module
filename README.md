```
                    @         @                 @@@@@       @         @@@@@@@@@@
                  @@@       @@@             @@@@@@@@@@@@@   @@@       @@@@@@@@@@
               @@@@@@    @@@@@@           @@@@@@@@@@@@@@@@@ @@@@@@    @@@@@@@@@@
             @@@@@@@@  @@@@@@@@          @@@@@@@@@@@@@@@@@@@@@@@@@@@  @@@@@@@@@@
          @@@@@@@@@@@@@@@@@@@@@   @@@   @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
        @@@@@@@@@@@@@@@@@@@@@@X@@@@@@@@@ @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
     @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ @@@@@@@@@@@@@@@@@ @@@@@@@@@@@@@@@@@@@@
   @@@@@@@@@@@@@@@@@@@@@@@@@@@X@@@@@@@@@    @@@@@@@@@@@@@   @@@@@@@@@@@@@@@@@@@@
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@    @@@           @@@@@       @@@@@@@@@@@@@@@@@@@@

                  @@@@@@      @@@@@@@@@@@@@@@@@@@@          @@@@@@@@@@@@@@@@@@@@
              @@@@@@@@@@@@@   @@@@@@@@@@@@@@@@@@@@          @@@@@@@@@@@@@@@@@@@@
            @@@@@@@@@@@@@@@@@ @@@@@@@@@@@@@@@@@@@@    @@@   @@@@@@@@@@@@@@@@@@@@
           @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ @@@@@@@@@@@@@@@@@@@@@@@@@@@@@
@@@@@@@@@@@@@@@@@@@@@         @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@     @@@@@@@@@@     
 @@@@@@@@@@@@@@@@@@@          @@@@@@@@@@@@@@@@@@@@ @@@@@@@@@     @@@@@@@@@@     
   @@@@@@@@@@@@@@@            @@@@@@@@@@@@@@@@@@@@    @@@        @@@@@@@@@@     
      @@@@@@@@                @@@@@@@@@@@@@@@@@@@@               @@@@@@@@@@     
```
# OP-Z Teensy LEGO Module
A [Teensy](https://www.pjrc.com/teensy/) powered DSP module for [Teenage Engineering OP-Z](https://teenage.engineering/guides/op-z). Housed in a custom LEGO enclosure with swappable panels. Based on forked OP-Z Teensy code, with ongoing hardware and firmware refinements.

![Moonshot OP-Z](https://freight.cargo.site/t/original/i/Y2663377974534190958873264783736/moonshot_op-z_identity.png)

## Build Status: Early Prototype (v0.1)
- Hardware
  - v2 LEGO Enclosure: Work-in-Progress
  - USB-C > MIDI: Working
  - Audio Adaptor: Soldering
  - 3.5mm Breakout Board: Soldering
  - USB-C Breakout Board: Soldering
- Software
  - DSP Code: Working
  - Added Expressive LED

## Instructions
Use Arduino IDE to open `opz-teensy` and configure with `Tools > USB Type > MIDI` then upload to a Teensy board with an Audio Adaptor Shield.

## Bill of Materials
### Internal Components
- [Teensy 4.1](https://www.pjrc.com/store/teensy41.html)
- [Teensy Audio Adaptor Rev D](https://www.pjrc.com/store/teensy3_audio.html)
- [TRSS 3.5mm Jack Breakout Board](https://www.sparkfun.com/sparkfun-trrs-3-5mm-jack-breakout.html)
- [USB-C Breakout Board - Horizontal](https://www.sparkfun.com/sparkfun-usb-c-breakout.html)
- [2x Straight Header - Male 14-Pin](https://www.sparkfun.com/straight-header-male-gold-plating-pth-0-1in-14-pin.html)
- [Teensy Extended Header Kit](https://www.sparkfun.com/teensy-extended-header-kit.html)

### LEGO Enclosure Parts
- [1x LEGO 3036 Plate 6 x 8](https://www.bricklink.com/v2/catalog/catalogitem.page?P=3036)
- [2x LEGO 3034 Plate 2 x 8](https://www.bricklink.com/v2/catalog/catalogitem.page?P=3034)
- [6x LEGO 3020 Plate 2 x 4](https://www.bricklink.com/v2/catalog/catalogitem.page?P=3020)

### OP-Z Control → Teensy Parameter
- Green Dial   → Reverb Mix
- Blue Dial    → Delay Time
- Yellow Dial  → Drive Amount
- Red Dial     → Filter Cutoff
- Track 1      → Input Level
- Track 2      → Bitcrusher
