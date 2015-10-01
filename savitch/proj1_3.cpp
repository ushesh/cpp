// Savitch - Absolute C++
// Chapter 1, project 3

#include <iostream>

using namespace std;

const double SALARY_INCREASE_PCT = 7.6;

int main()
{
  double currentSalary, newSalary, backPay;
  cout << "Enter the workers' current salary ";
  cin >> currentSalary;
  newSalary = currentSalary * (1 + SALARY_INCREASE_PCT / 100);
  backPay = (newSalary - currentSalary) /2;
  cout << "New salary " << newSalary << endl;
  cout << "Backpay " << backPay;
  cout << endl;
}
