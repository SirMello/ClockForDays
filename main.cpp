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
  return clc.hour;
}


int setMinute(Clock clc){
  while (clc.minute > 59){
    cout << "Input the current minute." << endl;
    cin >> clc.minute;
  }
  return clc.minute;
}

void showTime(Clock clc){
  string time;
  if (to_string(clc.hour).length() == 1){
    time = "0" + to_string(clc.hour);
  } else {
    time = to_string(clc.hour);
  }

  if (to_string(clc.minute).length() == 1){
    time += ": 0" + to_string(clc.minute);
  } else {
    time += ": " + to_string(clc.minute);
  }

  if (to_string(clc.second).length() == 1){
    time += ": 0" + to_string(clc.second);
  } else {
    time += ": " + to_string(clc.second);
  }

  cout << time << endl;
}

int main(){
  Clock clock;
  bool done = false;
  clock.hour = setHour(clock);
  clock.minute = setMinute(clock);

  while (!done){
    sleep(1000);
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
    showTime(clock);
    }


  return 0;
}
