#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> jersey(5);
	vector<int> rating(5);

	for (int i = 0; i < 5; i++)
	{
		cout << "Enter player " << i+1 << "'s jersey number:" << endl;
		cin >> jersey.at(i);
		cout << "Enter player " << i+1 << "'s rating:" << endl;
		cin >> rating.at(i);
		cout << endl;
	}

	cout << "ROSTER" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << "Player " << i+1 << " -- Jersey number: " << jersey.at(i) << ", Rating: " << rating.at(i) << endl;
	}

	char ch;
	while (ch != 'q')
	{
		cout << endl;
		cout << "MENU" << endl;
		cout << "a - Add player\nd - Remove player\nu - Update player rating\nr - Output players above a rating\no - Output roster\nq - Quit" << endl << endl;

cout << "Choose an option:" << endl;

		cin >> ch;
		switch (ch) {
			case 'a':// add player
				cout << "Enter a new player" << "'s jersey number:" << endl;
				int jer;
				cin >> jer;
				jersey.push_back(jer);
				cout << "Enter the player's rating:" << endl;
				int rat;
				cin >> rat;
				rating.push_back(rat);
				break;
			case 'd':// remove player
				cout << "Enter a jersey number" << endl;
				cin >> jer;
				for (int i = 0; i < jersey.size(); i++)
				{
					if (jersey.at(i) == jer)
					{
						jersey.erase(jersey.begin() + i);
						rating.erase(rating.begin() + i);
					}
				}
				// for (auto it = jersey.begin(); it != jersey.end(); it++)
				// {
				// 	if (*it == jer)
				// 	{
				// 		jersey.erase(it);
				// 		rating.erase(it);
				// 	}
				// }
				break;
			case 'u': //update player rating
				cout << "Enter a jersey number:" << endl;
				cin >> jer;
				cout << "Enter a new rating for player:" << endl;
				cin >> rat;
				for (int i = 0; i < jersey.size(); i++)
				{
					if (jersey.at(i) == jer)
					{
						rating.at(i) = rat;
					}
				}
				break;
			case 'r': //output players above a rating
				cout << "Enter a rating:" << endl;
				cin >> rat;
				cout << endl << "ABOVE " << rat << endl;
				for (int i = 0; i < jersey.size(); i++)
				{
					if (rating.at(i) > rat)
						cout << "Player " << i+1 << " -- Jersey number: " << jersey.at(i) << ", Rating: " << rating.at(i) << endl;
				}

				break;
			case 'o': //output roster
				cout << "ROSTER" << endl;
				for (int i = 0; i < jersey.size(); i++)
				{
					cout << "Player " << i+1 << " -- Jersey number: " << jersey.at(i) << ", Rating: " << rating.at(i) << endl;
				}
				break;
			case 'q': //quit
				return 0;
		}
	}

	return 0;
}
