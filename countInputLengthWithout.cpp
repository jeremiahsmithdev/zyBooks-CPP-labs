#include <iostream>
using namespace std;

int main()
{
	string input;
	int num = 0;
	getline(cin, input);
	for (int i = 0; i < input.size(); i++)
	{
		if (input.at(i) == ' ')
			continue;
		else if (input.at(i) == '.')
			continue;
		else if (input.at(i) == '!')
			continue;
		else if (input.at(i) == ',')
			continue;
		else
			num++;
	}
	cout << num << endl;
}
