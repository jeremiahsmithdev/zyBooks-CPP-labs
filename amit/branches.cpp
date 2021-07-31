#include <iostream>
using namespace std;

int main(){
    int x = 20;
    int y = 18;
    if (x > y) {
        cout << "x is greater than y";
    }
    
    int time = 20;
    if (time < 12) {
        cout << "Good day.";
    } else {
        cout << "Good Afternoon.";
    }

    time = 20;
    if (time < 12) {
        cout << "Good morning.";
    } else if (time > 12 && time < 16) {
        cout << "Good Afternoon.";
    } else {
        cout << "Good evening.";
    }

    //ternary operator
    //variable = (condition) ? expressionTrue : expressionFalse;
    string result = (time < 18) ? "Good day." : "Good evening.";
    cout << result;

    int day = 5;
    switch(day) {
        case 1:
            cout << "Its Monday" << endl;
            break;
        case 2:
            cout << "Its Tuesday" << endl;
            break;
        case 3:
            cout << "Its Wednusday" << endl;
            break;
        default:
            cout << "Its weekend" << endl;
    }

}
