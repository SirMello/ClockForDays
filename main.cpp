#include <iostream>
#include <string>
#include <chrono>
#include <thread>
#include "clock.h"

using namespace std;

int ONE_SECOND = 1000;

void sleep(int x){
  std::this_thread::sleep_for(std::chrono::milliseconds(x));
}

int main(){
  Clock clock;
  bool done = false;
  clock.setHour();
  clock.setMinute();

  while (!done){
    sleep(ONE_SECOND);
    ++clock.second;
    if (clock.second >= 60){
      clock.second = 0;
      ++clock.minute;
    }
    if (clock.minute >= 60){
        clock.minute = 0;
        ++clock.hour;
      }

    if (clock.hour >= 25){
      clock.hour = 0;
      clock.minute = 0;
      clock.second = 0;
      }
    clock.showTime();
    }


  return 0;
}
