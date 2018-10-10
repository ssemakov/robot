#ifndef _AURIGA_ARDUINO_100918_H_
#define _AURIGA_ARDUINO_100918_H_

/**
 * Configuration and constants.
 */
#include <Arduino.h>
#include <MePort.h>

#define LED_SHIELD_PIN 44

 MePort_Sig mePort[17] =
 {
   { NC, NC }, {   5,   4 }, {   3,   2 }, {   7,   6 }, {   9,   8 },
   { 16, 17 }, { A10, A15 }, {  A9, A14 }, {  A8, A13 }, {  A7, A12 },
   //             LIGHT2        LIGHT1        TEMP          SOUND
   { A6,A11 }, {  NC,  A2 }, {  NC,  A3 }, {  NC,  A0 }, {  NC,  A1 },
   { NC, NC }, { NC, NC },
 };

#endif
