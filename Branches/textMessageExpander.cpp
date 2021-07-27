#include <iostream>
#include <string>
using namespace std;


void getExpansion(string word)
{
	if (word == "BFF")
		cout << "best friend forever";
	else if (word == "IDK")
		cout << "I don't know";
	else if (word == "JK")
		cout << "just kidding";
	else if (word == "TMI")
		cout << "too much information";
	else if (word == "TTYL")
		cout << "talk to you later";
	else if (word == "BFF.")
		cout << "best friend forever.";
	else if (word == "IDK.")
		cout << "I don't know.";
	else if (word == "JK.")
		cout << "just kidding.";
	else if (word == "TMI.")
		cout << "too much information.";
	else if (word == "TTYL.")
		cout << "talk to you later.";
	else if (word == "BFF,")
		cout << "best friend forever,";
	else if (word == "IDK,")
		cout << "I don't know,";
	else if (word == "JK,")
		cout << "just kidding,";
	else if (word == "TMI,")
		cout << "too much information,";
	else if (word == "TTYL,")
		cout << "talk to you later,";
	else
		cout << word;
}

int main() {
	cout << "Enter text:" << endl;
	string input;
	getline(cin, input);
	cout << "You entered: " << input << endl;
	string word;
	word = input.substr(0, input.find(" "));
	// only one word
	if (input.find(" ") > input.size())
		word = input;
	cout << "Expanded: ";
	while (1)
	{
		// output word
		getExpansion(word);
		cout << " ";
		// cut processed words from input
		input = input.substr(input.find(" ") + 1);
		// grab next word from input
		word = input.substr(0, input.find(" "));
		// handle last word
		if (input.find(" ") > input.size())
		{
			word = input;
			// output word
			getExpansion(word);
			cout << endl;
			break;
		}
	}
   return 0;
}
