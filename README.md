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
A synthesizer plugin prototype based on [Teensy](https://www.pjrc.com/teensy/) for [Teenage Engineering OP-Z](https://teenage.engineering/guides/op-z).

## Instructions (WIP)
Use Arduino IDE to open `opz-teensy` and configure with `Tools > USB Type > MIDI` then upload to a Teensy 4.1 board with an Audio Adaptor Shield.

## Bill of Materials
### Internal Components
- [Teensy 4.1](https://www.pjrc.com/store/teensy41.html)
- [Teensy Audio Adaptor Rev D](https://www.pjrc.com/store/teensy3_audio.html)
- [TRSS 3.5mm Jack Breakout Board](https://www.sparkfun.com/sparkfun-trrs-3-5mm-jack-breakout.html)
- [USB-C Breakout Board - Horizontal](https://www.sparkfun.com/sparkfun-usb-c-breakout.html)
- [2x Straight Header - Male 14-Pin](https://www.sparkfun.com/straight-header-male-gold-plating-pth-0-1in-14-pin.html)
- [Teensy Extended Header Kit](https://www.sparkfun.com/teensy-extended-header-kit.html)

### LEGO Case Parts
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
