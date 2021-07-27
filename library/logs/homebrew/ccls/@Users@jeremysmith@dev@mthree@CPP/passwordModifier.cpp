#include <iostream>
#include <string>
using namespace std;

int main() {
   
   /* Type your code here. */
	string pwd;
	cin >> pwd;
	for (int i = 0; i < pwd.size(); i++)
	{
		if (pwd.at(i) == 'i')
			pwd.at(i) = '1';
		if (pwd.at(i) == 'a')
			pwd.at(i) = '@';
		if (pwd.at(i) == 'm')
			pwd.at(i) = 'M';
		if (pwd.at(i) == 'B')
			pwd.at(i) = '8';
		if (pwd.at(i) == 's')
			pwd.at(i) = '$';
	}
	pwd.push_back('!');

	cout << pwd << endl;

   return 0;
}
