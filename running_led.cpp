#include "led_shield/running_led.h"

namespace LedShield {
    RunningLed::RunningLed(const int* color, const int& pin, int numLeds)
      : m_rgb(color), m_numLeds(numLeds)
    {
      m_led = new MeRGBLed(0);
      m_led->setpin(pin);
      m_led->setNumber(m_numLeds);
    }

    RunningLed::~RunningLed()
    {
       if (m_led) {
         delete m_led;
       }
    }


  void RunningLed::run(int delayMs) {
    for (int i=0; i<m_numLeds; i++)
    {
      int prev_idx = i;

      for (int j=0; j<m_numLeds; j++) {
        prev_idx = prevLedIdx(prev_idx);
        int half_tone = pow(2, j + 1);
        m_led->setColorAt(prev_idx, m_rgb[0] / half_tone, m_rgb[1] / half_tone, m_rgb[2] / half_tone);
      }

      m_led->show();
      delay(delayMs);
    }
  }

  int RunningLed::prevLedIdx(int currentIdx) {
    int prev_idx = currentIdx - 1;
    if ( prev_idx < 0) {
      prev_idx = m_numLeds - 1 - currentIdx;
    }
    return prev_idx;
  }
}
