# ainsuForth-gen-exp-crkt
ainsuForth - generalized - all targets, emphasis on Crickit (stand-alone) - experimental


previously ainsuForth-gen-exp

May 30th, 2018: with an eye towards anything unique about the Crickit (CPX variant).

August 2nd:

More experimental -- looking at adding SPI flash write support,
file capture from ASCII upload (the 'download' word) and perhaps
splitting out file i/o to its own proper source files.


EXPERIMENTAL -- the below, plus a limited use of the SPI flash
to author forth source code on the device.  Currently, this
amounts to reading a full program (a multi-line forth source
program) from /forth/job.fs on the SPI flash volume.


Platform: Circuit Playground Express (an M0 board w/SPI 2MB flashROM) - 02 Aug 2017

A Forth for SAMD21G18A based on YAFFA-ARM Forth - 2012 by Stuart Wood.



See compatibility.h for (some) configuration options across
target board devices (subset of boards.txt found under

  .arduino15/packages/adafruit/hardware/samd/1.0.18/boards.txt )


----------------------------------------------------------------

Current platform is the

    Adafruit Feather M0 Express -- 15 January 2018.

All other platform declarations are incorrect, where they differ
from this one.

----------------------------------------------------------------

OLD:
Current platform is the
    Adafruit CPX (Circuit Playground Express) - PRODUCT ID: 3333
which is ATSAMD21 Cortex M0+ based.
----------------------------------------------------------------

Platform will change frequently -- five different targets are
tested on a (somewhat) rotating basis:

  * Arduino M0 Pro
  * Adafruiit Feather M0 Express
  * Adafruit Metro M0 Express
  * Adafruit Circuit Playground Express (which is also an M0 board)
  * Adafruit Gemma M0

Wed 30 May 17:49:01 UTC 2018

$ cat -n README.md | sed 60q | md5sum

fcfb966d52910fc6745664f24eb567d0  -

old:

# YAFFA-ARM
YAFFA for Arduino ARM Processors 

See:
 [ https://github.com/sdwood68/YAFFA-ARM ]

