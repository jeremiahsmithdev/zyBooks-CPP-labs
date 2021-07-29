#include <iostream>
using namespace std;

int main() {
	int highwayNumber;
	bool odd;

	cin >> highwayNumber;
	/* Type your code here. */
	odd = highwayNumber % 2;
	int servingPrimary;

	if (highwayNumber > 0 && highwayNumber < 100)
	{
		cout << "I-" << highwayNumber << " is primary,";
		if (odd)
			cout << " going north/south." << endl;
		else
			cout << " going east/west." << endl;
	}
	else if (highwayNumber > 99 && highwayNumber < 1000 && highwayNumber != 200)
	{
		cout << "I-" << highwayNumber << " is auxiliary,";
		servingPrimary = highwayNumber % 100;

		cout << " serving I-" << servingPrimary << ",";
		if (odd)
			cout << " going north/south." << endl;
		else
			cout << " going east/west." << endl;
	}
	else
		cout << highwayNumber << " is not a valid interstate highway number." << endl;



	return 0;
}
