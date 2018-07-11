#include <iostream>
#include <string>

class Clock {
private:
  void clearScreen(){
    int n;
    for (n = 0; n < 10; ++n){
      std::printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    }
  }
public:
  int hour = 25;
  int minute = 60;
  int second = 0;

public:
  void setMinute(){
    while (minute > 59){
      std::cout << "Input the current minute." << std::endl;
      std::cin >> minute;
    }
  }

  void setHour(){
    while (hour > 24){
      std::cout << "Input the current hour." << std::endl;
      std::cin >> hour;
    }
  }

  void showTime(){
    std::string time;
    if (std::to_string(hour).length() == 1){
      time = "0" + std::to_string(hour);
    } else {
      time = std::to_string(hour);
    }

    if (std::to_string(minute).length() == 1){
      time += ": 0" + std::to_string(minute);
    } else {
      time += ": " + std::to_string(minute);
    }

    if (std::to_string(second).length() == 1){
      time += ": 0" + std::to_string(second);
    } else {
      time += ": " + std::to_string(second);
    }

    clearScreen();
    std::cout << time << std::flush;
    }
};
