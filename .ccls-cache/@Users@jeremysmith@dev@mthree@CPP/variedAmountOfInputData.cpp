#include <iostream>
using namespace std;

int main() {

	int input = 0;
	int cnt = 0;
	int max = 0;
	int total = 0;
	int average = 0;

	cin >> input;
	while (input >= 0)	
	{
		total += input;
		if (input > max)
			max = input;
		cnt++;
		cin >> input;
	}
	average = total / cnt;
	cout << max << " " << average << endl;

   return 0;
}
