#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int num;
	int size;
	cin >> size;
	vector<int> list(size);
	for (int i = 0; i < size; i++)
	{
		cin >> num;
		list.at(i) = num;
	}
	cin >> num;
	
	for (int i = 0; i < size; i++)
	{
		if (list.at(i) < num)
			cout << list.at(i) << ",";
	}
	cout << endl;

	return 0;
}
