#include <iostream>
using namespace std;

int main()
{
	string str = "";
	string temp;
	getline(cin, str);
	do
	{
		if ((str=="done") || str == "Done" || str == "d")
			return 0;
		for (int i = 0; i < str.size(); i++)
		{
			cout << str.at(str.size()-i-1);
		}
		cout << endl;
	} while (getline(cin, str));

	return 0;
}
