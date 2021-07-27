#include <iostream>
#include <string>
using namespace std;



int main() {

   /* Type your code here. */
	cout << "Enter text:" << endl;
	string input;
	getline(cin, input);
	cout << "You entered: " << input << endl;

	cout << "Expanded: ";
	if (input.find("BFF") < input.size())
		input.replace(input.find("BFF"), 3, "best friend forever");
	if (input.find("IDK") < input.size())
		input.replace(input.find("IDK"), 3, "I don't know");
	if (input.find("JK") < input.size())
		input.replace(input.find("JK"), 2, "just kidding");
	if (input.find("TMI") < input.size())
		input.replace(input.find("TMI"), 3, "too much information");
	if (input.find("TTYL") < input.size())
		input.replace(input.find("TTYL"), 4, "talk to you later");
	cout << input << endl;


   return 0;
}
