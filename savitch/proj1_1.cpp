// Savitch - Absolute C++
// Chapter 1, project 1

#include <iostream>

using namespace std;

const double OUNCES_IN_TON = 35273.92;

int main()
{
  double ouncesCerealBox, tonsCerealBox, boxesInTon;
  cout << "Enter the number of ounces in a cereal box ";
  cin >> ouncesCerealBox;
  tonsCerealBox = ouncesCerealBox / OUNCES_IN_TON;
  boxesInTon = 1 / tonsCerealBox;
  cout << tonsCerealBox << " tons in a cereal box";
  cout << "\n" << boxesInTon << " cereal boxes will weigh a ton";
  cout <<"\n";
}
