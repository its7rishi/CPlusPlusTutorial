#include <iostream>
#include <string>

using namespace std;

int main() {
    // MULTI-DIMENSIONAL ARRAYS
    //Syntax <datatype> <arrayname> [no of elements in main array] [no of elements in sub array]
    // example: strings myStrings[2][4];

    string letters[2][4] = {
        {"A", "B", "C", "D"},
        {"E", "F", "G", "H"}
    };

    // cout << letters[1][3];

    // LOOPING THROUGH MULTIDIMENSIONAL ARRAY

    // for(int i = 0; i < 2; i++) {
    //     for(int j = 0; j < 4; j++) {
    //         cout << letters[i][j] << "\n";
    //     }
    // }

    // THREE DIMENSIONAL ARRAY

    string myArr[2][2][2] = {
        {
            {"A", "B"},
            {"C", "D"}
        },
        {
            {"E", "F"},
            {"G", "H"}
        }
    };

    for (int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            for(int k = 0; k < 2; k++) {
                cout << myArr[i][j][k] << "\n";
            }
        }
    }

    return 0;
}
