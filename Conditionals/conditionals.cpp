#include <iostream>
using namespace std;

int main() {
    int x = 19;
    int y = 19;
    // if( x > y) {
    //     cout << x << " is greater than " << y << "\n";
    // } else if( x == y) {
    //     cout << "x and y are equal \n";
    // } else {
    //     cout << x << " is less than " << y << "\n";
    // }

    // Ternary Operator

    string result = (x == y) ? "x and y are equal" : (x > y) ? "x is greater than y" : "x is less than y";

    cout << result << "\n";

    return 0;
}
