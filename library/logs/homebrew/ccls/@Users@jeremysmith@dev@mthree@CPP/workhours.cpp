#include <iostream>
using namespace std;

int main () {
   int hourlyWage;
   
   hourlyWage = 20;

   cout << "Annual salary is: ";
   cout << hourlyWage * 40 * 50;
   cout << endl;

   cout << "Monthly salary is: ";
   cout << ((hourlyWage * 40 * 50) / 1);
   cout << endl;
   // FIXME: The above is wrong. Change the 1 so the statement outputs monthly salary.

   return 0;
}
