#include <iostream>
#include <string>
using namespace std;

int main() {

	string food;
	int num;

	while (true)
	{
		cin >> food;
		cin >> num;
		if (food == "quit")
			break;
		cout << "Eating " << num << " " << food << " a day keeps you happy and healthy." << endl;
	}


   return 0;
}
