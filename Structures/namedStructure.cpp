#include <iostream>
using namespace std;

// NAMED STRUCTURE
    // By giving name to a structure, it can be treated as a datatype
    // Can be accessed from anywher in the program

    struct car {
        string brand;
        string model;
        int year;
    };

    int main() {
        car myCar1;
        myCar1.brand = "Mitsubishi";
        myCar1.model = "Lancer";
        myCar1.year = 2001;

        car myCar2;
        myCar2.brand = "Jaguar";
        myCar2.model = "XJR";
        myCar2.year = 2011;

        cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << "\n";
        cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << "\n";
    }