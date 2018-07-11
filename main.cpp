// Includes for the project
#include <iostream>
#include <chrono>
#include <thread>
#include "clock.h"

// Included "using namespace std" to enchance readability
using namespace std;

// Global ONE_SECOND variable for simpler time manangement
int ONE_SECOND = 1000;

// Waiting function
void sleep(int x){
  std::this_thread::sleep_for(std::chrono::milliseconds(x));
}

int main(){
  // Create the clock object
  Clock clock;

  // Make a boolean variable to control the clock timing
  bool done = false;

  // Setup the clock time
  clock.setHour();
  clock.setMinute();

  // Start the timing loop
  while (!done){
    // Wait (SLEEP) for one second
    sleep(ONE_SECOND);

    // Add one second to the clock
    ++clock.second;

    // Check if it has been a minute yet, if yes, reset second and add 1 to the minute
    if (clock.second >= 60){
      clock.second = 0;
      ++clock.minute;
    }

    // Check if is has been a hour yet, if yes, reset minute and add 1 to the hour
    if (clock.minute >= 60){
        clock.minute = 0;
        ++clock.hour;
      }

    // Check if is has been day yet, if yes, reset all units of time
    if (clock.hour >= 25){
      clock.hour = 0;
      clock.minute = 0;
      clock.second = 0;
      }
    // After all logic is completed, display time to the console.
    clock.showTime();
    }


  return 0;
}
