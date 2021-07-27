#include <iostream>
#include <string>
using namespace std;


void getAbbreviation(string abbreviation)
{
	if (abbreviation == "BFF")
		cout << "BFF: best friend forever" << endl;
	else if (abbreviation == "IDK")
		cout << "IDK: I don't know" << endl;
	else if (abbreviation == "JK")
		cout << "JK: just kidding" << endl;
	else if (abbreviation == "TMI")
		cout << "TMI: too much information" << endl;
	else if (abbreviation == "TTYL")
		cout << "TTYL: talk to you later" << endl;
	else
		cout << "Unknown" << endl;
}

int main() {

   /* Type your code here. */
	cout << "Enter text:" << endl;
	string input;
	getline(cin, input);
	cout << "You entered: " << input << endl;
	if (input.find("BFF") < input.size())
		getAbbreviation("BFF");
	if (input.find("IDK") < input.size())
		getAbbreviation("IDK");
	if (input.find("JK") < input.size())
		getAbbreviation("JK");
	if (input.find("TMI") < input.size())
		getAbbreviation("TMI");
	if (input.find("TTYL") < input.size())
		getAbbreviation("TTYL");

   return 0;
}
