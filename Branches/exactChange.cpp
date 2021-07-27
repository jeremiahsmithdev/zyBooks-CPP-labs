#include <iostream>
using namespace std;

int main() {
	int change;

	cin >> change;

	if (change == 0)
	{
		cout << "No change" << endl;
		return 0;
	}
	if (change / 100)
	{
		if ((change / 100) == 1)
			cout << "1 Dollar" << endl;
		else
			cout << change / 100 << " Dollars" << endl;
		change -= change / 100 * 100;
	}
	if (change / 25)
	{
		if ((change / 25) == 1)
			cout << "1 Quarter" << endl;
		else
			cout << change / 25 << " Quarters" << endl;
		change -= change / 25 * 25;
	}
	if (change / 10)
	{
		if ((change / 10) == 1)
			cout << "1 Dime" << endl;
		else
			cout << change / 10 << " Dimes" << endl;
		change -= change / 10 * 10;
	}
	if (change / 5)
	{
		if ((change / 5) == 1)
			cout << "1 Nickel" << endl;
		else
			cout << change / 5 << " Nickels" << endl;
		change -= change / 5 * 5;
	}
	if (change / 1)
	{
		if ((change / 1) == 1)
			cout << "1 Penny" << endl;
		else
			cout << change / 1 << " Pennies" << endl;
		change -= change / 1 * 1;
	}


   return 0;
}
