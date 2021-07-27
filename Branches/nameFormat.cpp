#include <iostream>
#include <string>
using namespace std;

int main() {
	string firstName, middleName, lastName, line;
	getline(cin, line);
	firstName = line.substr(0, line.find(" "));
	line = line.substr(line.find(" ", line.find(" ")) + 1);
	middleName = line.substr(0, line.find(" "));
	if (line.find(" ") > line.size())
	{
		lastName = middleName;
		cout << lastName << ", " << firstName.at(0) << "." << endl;
		return 0;
	}
	line = line.substr(line.find(" ", line.find(" ")) + 1);
	lastName = line.substr(0, line.find(" "));
	if (lastName == "")
		cout << "2 words" << endl;

	cout << lastName << ", " << firstName.at(0) << "." << middleName.at(0) << "." << endl;

   return 0;
}
