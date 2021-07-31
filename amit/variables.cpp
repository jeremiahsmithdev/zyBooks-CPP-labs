#include <iostream>
using namespace std;

/*
In C++, there are different types of variables (defined with different keywords), for example:

int - stores integers (whole numbers), without decimals, such as 123 or -123
double - stores floating point numbers, with decimals, such as 19.99 or -19.99
char - stores single characters, such as 'a' or 'B'. Char values are surrounded by single quotes
string - stores text, such as "Hello World". String values are surrounded by double quotes
bool - stores values with two states: true or false

*/

int main(){
    //type variable = value;
    int myAge = 15;
    cout << "I am " << myAge << " years old.";

    //multiple variable def
    int x = 5, y = 6, z = 50;
    cout << x + y + z;

    const int pi = 15; 

    //other variable types
    int myNum = 5;               // Integer (whole number without decimals)
    double myFloatNum = 5.99;    // Floating point number (with decimals)
    char myLetter = 'D';         // Character
    string myText = "Hello";     // String (text)
    bool myBoolean = true;       // Boolean (true or false)

    cout << myText;

    /*
    int	4 bytes	Stores whole numbers, without decimals
    float	4 bytes	Stores fractional numbers, containing one or more decimals. Sufficient for storing 7 decimal digits
    double	8 bytes	Stores fractional numbers, containing one or more decimals. Sufficient for storing 15 decimal digits
    boolean	1 byte	Stores true or false values
    char	1 byte	Stores a single character/letter/number, or ASCII values
    */

    /*
    Numeric Datatypes : int, float, double
      float vs. double
            The precision of a floating point value indicates how many digits the value can have after the decimal point. 
            The precision of float is only six or seven decimal digits, while double variables have a precision of about 15 digits. 
            Therefore it is safer to use double for most calculations.
    Boolean : bool can have true or false, but returned as 1 and 0 respectively 
    Character : char is used to store a single character, surrounded by single quote ' '
    String : string is used to store sequence of characters. To use strings, you must include an additional header file in the source code, the <string> library
    */
}
