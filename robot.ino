#include "auriga_arduino.h"
#include "led_shield/led_shield.h"

const int color[] = { 15, 155, 16 };
LedShield::RunningLed led(color, LED_SHIELD_PIN);

void setup()
{
}

void loop()
{
  led.run(70);
}
