#include <iostream>
using namespace std;

int main(){
    int i = 0;
    while (i < 5) {
        cout << i << "\n";
        i++;
    }

    //do/while loop. The loop will always be executed at least once, even if the condition is false

    int j = 0;
    do {
        cout << j << "\n";
        j++;
    }
    while (j < 5);

    //When you know exactly how many times you want to loop through a block of code, use the for loop instead of a while loop:
    for (int i = 0; i < 5; i++) {
        cout << i << "\n";
    }

    for (int i = 0; i <= 10; i = i + 2) {
        cout << i << "\n";
    }

    //break
    for (int i = 0; i < 10; i++) {
        if (i == 4) {
            break;
        }
        cout << i << "\n";
    }

    //continue
    for (int i = 0; i < 10; i++) {
        if (i == 4) {
            continue;
        }
        cout << i << "\n";
    }
}
