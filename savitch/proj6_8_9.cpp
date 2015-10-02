// Savitch - Absolute C++
// Chapter 6, projects 8 and 9

#include <iostream>

using namespace std;

class Money {
  // From 6.8
  // int dollars, cents;

  // Added in 6.9
  double total;

public:
  void set();
  void get();

  //From 6.8
  // double total();
};

int main () {
  Money lunch;
  cout.setf(ios::fixed);
  cout.setf(ios::showpoint);
  cout.precision(2);
  lunch.set();
  lunch.get();
  cout << endl;

  // From 6.8
  // cout << endl << lunch.total() << endl;
}

void Money::set() {
  // Added in 6.9
  int dollars, cents;

  cout << "Dollars? ";
  cin >> dollars;
  cout << "Cents? ";
  cin >> cents;

  // Added in 6.9
  total = dollars + double(cents) / 100;
}

void Money::get() {
  // From 6.8
  // cout << dollars << " dollars and " << cents << " cents";

  // Added in 6.9
  cout << total;
}

/* From 6.8
double Money::total() {
  return (dollars + double(cents) / 100);
} */
