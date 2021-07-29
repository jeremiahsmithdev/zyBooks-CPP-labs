#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;
int main()
{
	string str;
	string reverse;
	getline(cin, str);
	string strMod = str;
	strMod.erase(remove(strMod.begin(), strMod.end(), ' '), strMod.end());
	reverse = strMod;
	for (int i = 0; i < strMod.size(); i++)
	{
		reverse.at(i) = strMod.at(strMod.size()-1-i);
	}
	if (strMod == reverse)
		cout << "palindrome: " << str << endl;
	else
		cout << "not a palindrome: " << str << endl;


	return 0;
}
