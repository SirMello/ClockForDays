#include <iostream>
#include <string>
using namespace std;
//what the fuck is this
string globalTime("");
void setTime(){
  bool done = false;
  while(!done){
    string time;
    cout << "Please enter a starting time. Press ENTER when done." << endl;
    cin >> time;
    if (time.length() <= 5){
      for(auto c = time.begin(); c != time.end(); ++c){
        if (*c == ':'){
          globalTime = time;
          done = true;
          cout << "Starting Time: " << globalTime << endl;
          break;
        }
      }


    }
  }
}

int main(){
  setTime();

  return 0;
}
