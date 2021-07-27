#include <iostream>
using namespace std;

int main() {
	int x;
	cin >> x;
	while (x > 0)
	{
		cout << x % 2;
		x = x / 2;
	}
	cout << endl;
   return 0;
}
