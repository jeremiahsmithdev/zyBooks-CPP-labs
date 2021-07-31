#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	int size;
	cin >> size;
	vector<int> elements(size);
	for (int i = 0; i < size; i++)
	{
		cin >> elements.at(i);
	}
	int lower, upper;
	cin >> lower;
	cin >> upper;

	for (int i = 0; i < size; i++)
	{
		if (elements.at(i) <= upper && elements.at(i) >= lower)
			cout << elements.at(i) << ",";
	}
	cout << endl;
	return 0;
}
