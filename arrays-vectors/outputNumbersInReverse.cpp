#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int size;
	int num;
	cin >> size;
	vector<int> numbers;
	for (int i = 0; i < size; i++)
	{
		cin >> num;
		numbers.push_back(num);
	}
	for (int i = 0; i < size; i++)
	{
		cout << numbers.at(size - 1 - i) << ",";
	}
	cout << endl;

	return 0;
}
