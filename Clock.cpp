#include <iostream>
#include <string>
using namespace std;
//what the fuck is this
string globalTime("");
int setTime(){
  string time;
  cout << "Please enter a starting time." << endl
  cin >> time << endl;
  if (length(time) <= 5){
    for(auto c : time){
      if (c == ":"){
        break
      }
    }
    globalTime = time;
  }
}

int main(){
  setTime()
  cout << globalTime << endl;
  return 0;
}
