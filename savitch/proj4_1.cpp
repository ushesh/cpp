// Savitch - Absolute C++
// Chapter 4, project 1

#include <iostream>

using namespace std;

void getTime(int &hour, int &minutes);
void convertTime(int &hour, int minutes, char &ampm);
void printTime(int hour, int minutes, char ampm);

int main() {
  int hour, minutes;
  char ampm;
  getTime(hour, minutes);
  convertTime(hour, minutes, ampm);
  printTime(hour, minutes, ampm);
}

void getTime(int &hour, int &minutes) {
  cout << "Enter the time in 24hr format ";
  cin >> hour >> minutes;
}

void convertTime(int &hour, int minutes, char &ampm) {
  if (hour > 12) {
    ampm = 'p';
    hour -= 12;
  }
  else {
    ampm = 'a';
  }
}

void printTime(int hour, int minutes, char ampm) {
  cout << "Time in 12hr format is " << hour << ":" << minutes << ampm;
  cout << endl;
}
