// Constructors
// A special method automatically called when an object of a class is created
// Constructor has the same name as the class and does not return any value
// Constructors are alwasy public

#include <iostream>
using namespace std;


// class MyClass {
//     public:
//         MyClass() {
//             cout << "Hello World";
//         }
// };

// int main() {
//     MyClass myObj;
//     return 0;
// }

// CONSTRUCTOR PARAMETERS

// class Car {
//     public:
//     string brand;
//     string model;
//     int year;
//     Car(string x, string y, int z) {
//         brand = x;
//         model = y;
//         year = z;
//     }
// };

// int main() {
//     Car carObj1("BMW", "Z5", 2020);
//     Car carObj2("Ferrari", "F50", 1999);

//     // Print
//     cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
//     cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";
// }

// DEFINING CONSTRUCTOR OUTSIDE THE CLASS

class Car {
    public:
        string brand;
        string model;
        int year;
        Car(string x, string y, int z); // Constructor declaration 
};

Car::Car(string x , string y, int z) {
    brand = x;
    model = y;
    year = z;
}

int main() {
    Car carObj1("Skoda", "Laura", 2021);
    Car carObj2("Volkswagon", "GT", 2020);

    cout << "Car1: " << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
    cout << "Car2: " << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";
}