#include <iostream>
using namespace std;

int main()
{
	int arrowBaseHeight;
	int arrowBaseWidth;
	int arrowHeadWidth;
	cout << "Enter arrow base height:" << endl;
	cin >> arrowBaseHeight;
	cout << "Enter arrow base width:" << endl;
	cin >> arrowBaseWidth;
	cout << "Enter arrow head width:" << endl;
	cin >> arrowHeadWidth;
	while (arrowHeadWidth <= arrowBaseWidth)
	{
		cout << "Enter arrow head width:" << endl;
		cin >> arrowHeadWidth;
	}
	cout << endl;
	for (int i = 0; i < arrowBaseHeight; i++)
	{
		for (int j = 0; j < arrowBaseWidth; j++)
		{
			cout << '*';
		}
		cout << endl;
	}
	for (int i = 0; i < arrowHeadWidth; i++)
	{
		for (int j = 0; j < arrowHeadWidth-i; j++)
			cout << '*';
		cout << endl;
	}

	return 0;
}
