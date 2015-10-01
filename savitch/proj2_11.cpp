// Savitch - Absolute C++
// Chapter 2, project 11

#include <iostream>

using namespace std;

int main() {
  double tempC, tempF;
  for (tempC = 100; ; tempC--) {
    tempF = 1.8 * tempC + 32;
    cout << tempC << "C = " << tempF << "F";
    cout << endl;
    if (tempF == tempC)
      break;
  }
  cout << "The closest they get is " << tempC << "C and " << tempF << "F";
  cout << endl;
}
