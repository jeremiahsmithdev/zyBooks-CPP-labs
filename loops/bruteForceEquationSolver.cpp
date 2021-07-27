#include <iostream>
using namespace std;

int main()
{
	bool solution = false;
	int X;
	int Y;
	int a;
	int b;
	int answer1;
	int c;
	int d;
	int answer2;
	cin >> a;
	cin >> b;
	cin >> answer1;
	cin >> c;
	cin >> d;
	cin >> answer2;

	for (int x = -10; x <= 10; x++)
	{
		for (int y = -10; y <= 10; y++)
		{
			if (((a*x + b*y) == answer1) && ((c*x + d*y) == answer2))
			{
				X = x;
				Y = y;
				solution = true;
			}
		}
	}
	if (solution)
		cout << "x = " << X << ", y = " << Y << endl;
	else
		cout << "There is no solution" << endl;


	return 0;
}
