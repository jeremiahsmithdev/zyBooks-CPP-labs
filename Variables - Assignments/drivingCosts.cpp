//
// Driving is expensive. Write a program with a car's miles/gallon and gas dollars/gallon (both doubles) as input, and output the gas cost for 20 miles, 75 miles, and 500 miles.
//
// Output each floating-point value with two digits after the decimal point, which can be achieved by executing
// cout << fixed << setprecision(2); once before all other cout statements. Note: End with a newline.
//
// Ex: If the input is:

// 20.0 3.1599
// the output is:
//
// 3.16 11.85 79.00
// Note: Real per-mile cost would also include maintenance and depreciation.
#include <iostream>
#include <iomanip>               //For setprecision
using namespace std;

int main() {

   /* Type your code here. */
	double milesGallon;
	double dollarsGallon;
	double costPerMile;

	//cin >> milesGallon;
	//cin >> dollarsGallon;
	milesGallon = 20.0;
	dollarsGallon = 3.1599;
	costPerMile = dollarsGallon / milesGallon;

	cout << fixed << setprecision(2);

	cout << costPerMile * 20;
	cout << " ";
	cout << costPerMile * 75;
	cout << " ";
	cout << costPerMile * 500 << endl;

   return 0;
}
