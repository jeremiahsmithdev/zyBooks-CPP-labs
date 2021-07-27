#include <iostream>
#include <string>
using namespace std;

int main() {

   /* Type your code here. */
	char ch;
	string str;
	int num = 0;

	cin >> ch;
	getline(cin, str);

	for (int i = 0; i < str.size(); i++)
	{
		if (str.at(i) == ch)
			num++;
	}
	if (num == 1)
		cout << num << " " << ch << endl;
	else
		cout << num << " " << ch << "'s" << endl;

   return 0;
}
