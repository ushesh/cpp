// Savitch - Absolute C++
// Chapter 2, project 1

#include <iostream>

using namespace std;

int main() {
  double costItem, yearsLater, rateInflation, newCostItem;
  int i;
  cout << "Enter the rate of inflation in % ";
  cin >> rateInflation;
  cout << "Enter the cost of the item ";
  cin >> costItem;
  cout << "Enter the number of years after which you want to buy ";
  cin >> yearsLater;
  newCostItem = costItem;
  for (i = 0; i < yearsLater; i++) {
    newCostItem *= (1 + rateInflation / 100);
  }
  cout << "The cost of the item after " << yearsLater << " years will be " << newCostItem;
  cout << endl;
}
