#include <iostream>
#include <string>
#include <ctime>

#include "Clock.h"
using namespace std;

int setHour(Clock clc){
  while (clc.hour > 24){
    cout << "Input the current hour." << endl;
    cin >> clc.hour;
  }

}

int setMinute(Clock clc){
  while (clc.minute > 59){
    cout << "Input the current minute." << endl;
    cin >> clc.minute;
  }
}


int main(){
  Clock clock;

  setHour(clock);
  setMinute(clock);
  return 0;
}
