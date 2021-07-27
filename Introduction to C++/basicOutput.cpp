#include <iostream>
using namespace std;

int main() {
   int userNum;
   int num2;

   /* Type your code here */
   cout << "Enter integer:" << endl;
   cin >> userNum;
   cout << "You entered: " << userNum << endl;
   cout << userNum << " squared is " << userNum * userNum << endl;
   cout << "And " << userNum << " cubed is " << userNum * userNum * userNum << "!!" << endl;
   cout << "Enter another integer:" << endl;
   cin >> num2;
   cout << userNum << " + " << num2 << " is " << userNum + num2 << endl;
   cout << userNum << " * " << num2 << " is " << userNum * num2 << endl;

   return 0;
}
