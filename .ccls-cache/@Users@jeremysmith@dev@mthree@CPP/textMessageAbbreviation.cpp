#include <iostream>
#include <string> // Note: This library is needed to use the string type
using namespace std;

int main() {

	string abbreviation;


   /* Type your code here. */
	cout << "Input an abbreviation:" << endl;
	cin >> abbreviation;

	if (abbreviation == "LOL")
		cout << "laughing out loud" << endl;
	else if (abbreviation == "BFF")
		cout << "best friends forever" << endl;
	else if (abbreviation == "IMHO")
		cout << "in my humble opinion" << endl;
	else if (abbreviation == "TMI")
		cout << "too much information" << endl;
	else if (abbreviation == "IDK")
		cout << "I don't know" << endl;
	else
		cout << "Unknown" << endl;

   return 0;
}
