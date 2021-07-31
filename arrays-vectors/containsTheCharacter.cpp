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
	char ch;
	cin >> ch;

	for (int i = 0; i < size; i++)
	{
		bool hasCh = false;
		for (int j = 0; j < words.at(i).size(); j++)
		{
			if (words.at(i).at(j) == ch)
				hasCh = true;
		}
		if (hasCh)
			cout << words.at(i) << ",";
	}
	return 0;
}
