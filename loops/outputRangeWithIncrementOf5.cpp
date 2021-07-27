#include <iostream>
using namespace std;

int main()
{
	int input1;
	int input2;
	int inc;
	cin >> input1;
	cin >> input2;
	inc = input1;
	if (input2 < input1)
	{
		cout << "Second integer can't be less than the first." << endl;
		return 0;
	}
	while (inc <= input2)
	{
		cout << inc << " ";
		inc += 5;
	}
	cout << endl;

	return 0;
}
