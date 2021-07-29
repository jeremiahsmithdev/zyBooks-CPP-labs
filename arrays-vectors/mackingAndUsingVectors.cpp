#include <iostream>
#include <vector>
using namespace std;

int main() {

	/* Your code goes here */
	int input;
	vector<int> inputVector;
	while (cin >> input && input != -1)
	{
		inputVector.push_back(input);
	}
	for (int i = 0; i < inputVector.size(); i++)
	{
		if (inputVector.at(i) != inputVector.back())
			cout << inputVector.at(i) << endl;
	}


	return 0;
}
