#include <iostream>
#include <string>
using namespace std;

int main() {
   
   /* Type your code here. */
	string input;
	string temp;
	getline(cin, input);
	for (int i = 0; i < input.length(); i++)
	{
		if (isalpha(input.at(i)))
			temp = temp + input[i];
	}
	input = temp;
	// input.erase(input.begin()+1);

	cout << input << endl;

   return 0;
}
