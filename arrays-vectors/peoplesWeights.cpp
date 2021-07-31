#include <iostream>
#include <iomanip>              // For setprecision
#include <vector>
using namespace std;

int main() {

	cout << fixed << setprecision(2);
	vector<double> numbers(5);
	double totalWeight = 0;
	for (int i = 0; i < 5; i++)
	{
		cout << "Enter weight " << i + 1 << ":" << endl;
		cin >> numbers.at(i);
		totalWeight += numbers.at(i);
	}
	double max = numbers.at(0);
	cout << "You entered:";
	for (int i = 0; i < 5; i++)
	{
		if (numbers.at(i) > max)
			max = numbers.at(i);
		cout << numbers.at(i) << " ";
	}

	cout << endl << endl;

	cout << "Total weight: " << totalWeight << endl;
	cout << "Average weight: " << totalWeight/5.0 << endl;
	cout <<  "Max weight: " << max << endl;
	

   return 0;
}
