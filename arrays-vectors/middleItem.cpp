#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int num;
	vector<int> list;
	while (cin >> num && num >= 0)
	{
		list.push_back(num);
	}
	if (list.size() < 10)
		cout << "Middle item: " << list.at(list.size()/2) << endl;
	else cout << "Too many numbers" << endl;
	return 0;
}
