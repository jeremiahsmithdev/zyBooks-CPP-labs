#include <iostream>
#include <string>      // Supports use of "string" data type
#include <cmath>
#include <iomanip>
using namespace std;

int main() {

	double wallHeight;
	double wallWidth;

	cout << fixed << setprecision(2) << endl;
	cout << "Enter wall height (feet):" << endl;
	cin >> wallHeight;
	cout << "Enter wall width (feet):" << endl;
	cin >> wallWidth;
	cout << "Wall area: " << wallHeight * wallWidth << " square feet" << endl;
	const double paintNeeded = (wallHeight * wallWidth) / 350;
	cout << "Paint needed: " << paintNeeded << " galons" << endl;
	cout << "Cans needed: " << ceil(paintNeeded) << " can(s)" << endl;


   return 0;
}
