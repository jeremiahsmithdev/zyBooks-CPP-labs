#include <iostream>
#include <string>
using namespace std;

int main() {
   string firstName1;
   string lastName1;
   string firstName2;
   string lastName2;

   cout << "What is the first person's first name?" << endl;
   cin >> firstName1;
   cout << "What is the first person's last name?" << endl;
   cin >> lastName1;

   cout << "What is the second person's first name?" << endl;
   cin >> firstName2;
   cout << "What is the second person's last name?" << endl;
   cin >> lastName2;

   firstName1 = "Pat";
   lastName1 = "Smith";
   firstName2 = "Kelly";
   lastName2 = "Jones";
      
   cout << "Here are some common married-couple names:" << endl;
   cout << firstName1 << "-" << lastName1 << " and " << firstName2 << "-" << lastName2 << endl;
   cout << firstName1 << "-" << lastName2 << " and " << firstName2 << "-" << lastName1 << endl;
   cout << firstName1 << "-" << " and " << firstName2 << "-" << lastName2 << endl;
   // FIXME: Print two hyphenated last name options, with either last name
   //        appearing first. (A hyphen can be written as "-")

   return 0;
}