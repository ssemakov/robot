#ifndef _RUNNINGLED100918_H_
#define _RUNNINGLED100918_H_
#include <MeRGBLed.h>

namespace LedShield {
  const int defaultNumberOfLeds = 12;

  class RunningLed {
    public:
      RunningLed(const int* color, const int& pin, const int& numLeds=defaultNumberOfLeds);
      ~RunningLed();

      void run(const int& delayMs);

    private:
      const int* m_rgb;
      const int m_numLeds;
      MeRGBLed* m_led;

      int prevLedIdx(int currentIdx);
  };
}

#endif
