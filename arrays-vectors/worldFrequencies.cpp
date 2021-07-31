#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	int size;
	string word;
	cin >> size;
	vector<string> words(size);
	for (int i = 0; i < size; i++)
	{
		cin >> words.at(i);
	}

	for (int i = 0; i < size; i++)
	{
		cout << words.at(i);
		int freq = 0;
		for (int j = 0; j < size; j++)
		{
			if (words.at(i) == words.at(j))
				freq++;
		}
		cout << " - " << freq << endl;
	}
	return 0;
}
