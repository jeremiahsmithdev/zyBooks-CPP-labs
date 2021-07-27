#include <iostream>
using namespace std;

int main()
{
	int num;
	cin >> num;
	if (num < 10 || num > 100)
	{
		cout << "Input must be 11-100" << endl;
		return 0;
	}
	while (num / 10 !=  num % 10)
	{
		cout << num << " ";
		num = num - 1;
	}
	cout << num << " " << endl;

	return 0;
}
