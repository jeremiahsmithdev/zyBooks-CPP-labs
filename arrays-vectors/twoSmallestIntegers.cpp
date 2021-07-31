#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	int size;
	cin >> size;
	vector<int> integers(size);
	for (int i = 0; i < size; i++)
	{
		cin >> integers.at(i);
	}
	int smallest = integers.at(0);
	for (int i = 0; i < size; i++)
	{
		if (integers.at(i) < smallest)
			smallest = integers.at(i);
	}
	int small;
	if (integers.at(0) != smallest)
		small = integers.at(0);
	else
		small = integers.at(1);
	for (int i = 0; i < size; i++)
	{
		if (integers.at(i) < small && integers.at(i) != smallest)
			small = integers.at(i);
	}

	cout << smallest << " and " << small;

	cout << endl;
	return 0;
}
