// Write a program to determine if a given year is a leap year.
#include <iostream>
using namespace std;
int main() {
    //object declaration
    int year;
   cout << "Enter a year: ";
  cin >> year;

    bool isLeapYear = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);

    if (isLeapYear) {
     cout << year << " is a leap year." << endl;
    } else {
     cout << year << " is not a leap year." << endl;
    }

    return 0;
}