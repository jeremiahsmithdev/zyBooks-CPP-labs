#include <iostream>
using namespace std;

int main() {
   int inputYear;
   bool isLeapYear = false;
   
   cin >> inputYear;
   
   cout << inputYear << " - ";
   if (inputYear % 4 == 0)
   {
	   if (inputYear % 100 == 0)
	   {
		   if (inputYear % 400 == 0)
			   cout << "leap year" << endl;
		   else
		   {
			   cout << "not a leap year" << endl;
		   }
	   }
	   else
		   cout << "leap year" << endl;
   }
   else
	   cout << "not a leap year" << endl;

   return 0;
}
