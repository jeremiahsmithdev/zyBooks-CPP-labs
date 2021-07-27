#include <iostream>
#include <string>
using namespace std;

int main() {
   string userString;
   
   cin >> userString;

   /* Type your code here. */
   for (int i = 0; i < userString.size(); i++)
   {
	   if (isdigit(userString.at(i)))
		   continue;
	   else
	   {
		   cout << "No" << endl;
		   return 0;
	   }
   }
   cout << "Yes" << endl;
   

   return 0;
}
