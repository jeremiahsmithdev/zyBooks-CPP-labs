#include <algorithm>
#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main()
{
	cout << fixed << setprecision(2);
	double num;
	int size;
	cin >> size;
	vector<double> list(size);
	for (int i = 0; i < size; i++)
	{
		cin >> num;
		list.at(i) = num;
	}
	double max = list.at(0);
	for (int i = 0; i < size; i++)
	{
		if (list.at(i) > max)
			max = list.at(i);
	}
	for (int i = 0; i < size; i++)
	{
		cout << list.at(i)/max << " ";
	}
	cout << endl;

	return 0;
}
