// Savitch - Absolute C++
// Chapter 2, project 11

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
  string firstName, lastName;
  int heightFeet, heightInches, idealWeight;
  fstream inputStream;
  inputStream.open("proj2_11.txt");
  while (inputStream >> firstName >> lastName) { // evaluates to "false" if no
                                                 // more entries are present
    inputStream >> heightFeet;
    inputStream >> heightInches;
    idealWeight = 110 + ((heightFeet - 5) * 12 + heightInches) * 5;
    cout << "Ideal weight for " << firstName << " " << lastName << " is ";
    cout << idealWeight << "lb";
    cout << endl;
  }
  cout << endl;
}
