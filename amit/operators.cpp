#include <iostream>
using namespace std;

int main(){
    //Arithmetic Operators : + - * / % ++ --
    //Assignment : = += -+ *= /= %= &= |= ^= >>= <<=
    //comparison : == != > < >= <=
    //Logical : && || !
    double a = 5;
    a /= 3;
    cout << a; //1.6666721
    
    int b = 5;
    b %= 3;
    cout << b; //2

    int c = 5;
    c &= 3;
    cout << c; //1

    int d = 5;
    d &= 3;
    cout << d; //7

    int x = 5;
    x <<= 3;
    cout << x; //40

    return 0;
}
