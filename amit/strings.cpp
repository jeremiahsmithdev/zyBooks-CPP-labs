#include <iostream>
using namespace std;

int main(){
//A string variable contains a collection of characters surrounded by double quotes:
//To use strings, you must include an additional header file in the source code, the <string> library:

//The + operator can be used between strings to add them together to make a new string. This is called concatenation
string firstName = "Amit ";
string lastName = "Deshpande";
string fullName = firstName + lastName;
cout << fullName;
cout << endl;


//A string in C++ is actually an object, which contain functions that can perform certain operations on strings
//The major difference between the two, is that the append() function is much faster.
firstName = "Nagesh ";
lastName = "Kumar";
fullName = firstName.append(lastName);
cout << fullName;

//C++ uses the + operator for both addition and concatenation.
//Numbers are added. Strings are concatenated.
int x = 10;
int y = 20;
int z = x + y;      // z will be 30 (an integer)
string x1 = "10";
string y1 = "20";
string z1 = x1 + y1;   // z will be 1020 (a string)

//To get the length of a string, use the length() function or size() function
string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
cout << "The length of the txt string is: " << txt.length();
cout << "The length of the txt string is: " << txt.size();

//You can access the characters in a string by referring to its index number inside square brackets [].
string myString = "Hello";
cout << myString[0];
cout << myString[3];
myString[0] = 'J';
cout << myString;

//cin considers a space (whitespace, tabs, etc) as a terminating character,
//when working with strings, we often use the getline() function to read a line of text. It takes cin as the first parameter, 
//and the string variable as second:
string fullname;
cout << "Type your full name: ";
getline (cin, fullname);
cout << "Your name is: " << fullname;

/*
You might see some C++ programs that runs without the standard namespace library. The using namespace std line can be omitted 
and replaced with the std keyword, followed by the :: operator for string (and cout) objects:
It is up to you if you want to include the standard namespace library or not.
*/
std::string greeting = "Hello";
std::cout << greeting;
}
