// Savitch - Absolute C++
// Chapter 1, project 2

#include <iostream>

using namespace std;

const double SWEETENER_IN_SODA = 0.001;

int main()
{
  double sweetenerMouseKill, weightMouse, weightHuman, weightPerLbKill,
    sodaPerLbKill;
  cout << "Enter the amount of sweetener that will kill a mouse in lb ";
  cin >> sweetenerMouseKill;
  cout << "Enter the weight of the mouse in lb ";
  cin >> weightMouse;
  cout << "Enter the human's target weight in lb ";
  cin >> weightHuman;
  weightPerLbKill = sweetenerMouseKill / weightMouse;
  sodaPerLbKill = weightPerLbKill / SWEETENER_IN_SODA;
  cout << "Your " << weightHuman << "lb friend will be killed by ";
  cout << sodaPerLbKill * weightHuman << " sodas";
  cout <<"\n";
}
