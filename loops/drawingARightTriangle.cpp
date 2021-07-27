#include <iostream>
using namespace std;

int main()
{
	char ch;
	int height;
	cout << "Enter a character:" << endl;
	cin >> ch;
	cout << "Enter triangle height:" << endl;
	cin >> height;

	for (int i = 0; i <= height; i++)
	{
		for (int j = 0; j < i; j++)
			cout << ch << " ";
		cout << endl;
	}

	return 0;
}
