#include <iostream>
#include <string>
#include <chrono>
#include <thread>
#include "clock.h"

void sleep(int x){
  std::this_thread::sleep_for(std::chrono::milliseconds(x));
}



using namespace std;

int setHour(Clock clc){
  while (clc.hour > 24){
    cout << "Input the current hour." << endl;
    cin >> clc.hour;
  }
}


void showTime(Clock clc){
  string time;
  time = clc.hour + ":" + clc.minute + ":" + clc.seconds;
}


int setMinute(Clock clc){
  while (clc.minute > 59){
    cout << "Input the current minute." << endl;
    cin >> clc.minute;
  }
}


int main(){
  Clock clock;
  bool done = false;
  setHour(clock);
  setMinute(clock);

  while (!done){
    sleep(10);
    ++clock.second;
    if (clock.second == 60){
      clock.second = 0;
      ++clock.minute;
    }
    if (clock.minute == 60){
        clock.minute = 0;
        ++clock.hour;
      }

    if (clock.hour == 25){
      clock.hour = 0;
      clock.minute = 0;
      clock.second = 0;
      }
    }


  return 0;
}
