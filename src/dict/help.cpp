// Tue  3 Jul 20:04:42 UTC 2018
// 4737-a3b-00d- // gen-exp-crkt CPX

// Sat 23 Jun 02:43:45 UTC 2018
// 4737-a3b-00b- // shred from latest gen-exp-m4

// Sat Jul 29 18:14:02 UTC 2017
// 4735-b0b-01-

#include <Arduino.h>
#include "../../yaffa.h"
#include "../../Dictionary.h"
// #include "../../Error_Codes.h"

/*******************************************************************************/
/*******************************************************************************/
const char help_str[] = "help";
void _help(void) {
  Serial.println();
  Serial.print("    type 'words' instead of 'help'.\r\n");
  Serial.print("\r\n    LED is on D37.\r\n");
}

const char who_str[] = "who";
void _who(void) {
  // hex 1b29 dup 50 dump
  // _hex();
  dStack_push(0x1b29); // nothing sacred, experiment!  YMMV.
  _dupe();
  dStack_push(0x50);
  _dump();
}
