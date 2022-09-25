// C++ OOP = Object Oriented Programming

// Classes & Objects
// Class => Class is a template for an object
// Object => Object is an instance of a class
// Objects inherit all the variables and functions from the class

// Class

/*
Syntax:

class myClass {     //the class
    public:         //access specifier
    int myNum       //Attribute (int variable)
    string myString //Attribute (string variable)
};
*/

#include <iostream>
using namespace std;

// class myClass {
//     public:
//     int myNum;
//     string myString;
// };

// int main() {
//     myClass myObj;

//     myObj.myNum = 15;
//     myObj.myString = "Hello World";

//     cout << myObj.myNum << endl;
//     cout << myObj.myString << endl;
// }

// Multiple Objects

class Car {
    public:
    string brand;
    string model;
    int year;
    string carInfo() {
        return("I love this car!");
    }
    string myMethod(); // declaration inside class
};

// Method definition outside class
string Car::myMethod() {
    return ("Hello World");
}

int main() {
    Car car1;
    car1.brand = "Suzuki";
    car1.model = "WagonR";
    car1.year = 2011;

    Car car2;
    car2.brand = "Suzuki";
    car2.model = "Ciaz";
    car2.year = 2020;

    cout << car1.brand << " " << car1.model << " " << car1.year << " " << car1.carInfo() << " " << car1.myMethod() << "\n";
    cout << car2.brand << " " << car2.model << " " << car2.year << " " << car2.carInfo() << " " << car2.myMethod() << "\n";
    return 0;
}