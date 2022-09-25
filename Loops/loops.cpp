#include <iostream>
using namespace std;


int main() {
    // WHILE LOOP
    // int i = 0;
    // while(i < 5) {
    //     cout << i << "\n";
    //     i++;
    // }

    // DO WHILE => runs at least once
    // int i = 0;
    // do {
    //     cout << i << "\n";
    //     i++;
    // }
    // while(i < 6);

    // FOR LOOP

    // for(int i = 0; i < 6; i++) {
    //     cout << i << "\n";
    // }

    // for(int i = 0; i <= 10; i += 2) {
    //     cout << i << "\n";
    // }

    // BREAK & CONTINUE 
    // Break => breaks the loop when condition is met

    // for (int i = 0; i <= 10; i++) {
    //     if(i == 5) {
    //         break;
    //     }
    //     cout << i << "\n";
    // }

    // Continue => Skips the current iteration when the condition is met

    for(int i = 0; i <= 100; i++) {
        if( i % 5 != 0) {
            continue;
        }

        cout << i << "\n";
    }
    return 0;
}