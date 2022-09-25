//INHERITANCE

//DERIVED CLASS (Child) = class that inherits from another class
//BASE CLASS (Parent) = the class being inherited from

// To inherit a class, use ':' symbol

#include <iostream>
using namespace std;

// //Base Class
// class Vehicle{
//     public:
//         string brand = "Ford";
//         void honk() {
//             cout << "Tuut Tuut! \n";
//         }
// };

// //Derived Class
// class Car: public Vehicle {
//     public:
//         string model = "Mustang";
// };

// int main() {
//     Car myCar;
//     myCar.honk();
//     cout << myCar.brand << " " << myCar.model;
//     return 0;
// }


// MULTI-LEVEL INHERITANCE

// Base Class
// class MyClass {
//     public:
//         void myFunction() {
//             cout << "Some content in parent class \n";
//         }
// };

// //Derived Class (child)
// class MyChild: public MyClass {
// };

// // Derived Class (grandchild)
// class MyGrandChild: public MyChild {

// };

// int main() {
//     MyGrandChild myObj;
//     myObj.myFunction();
//     return 0;
// }

// MULTIPLE INHERITANCE

// A class can also be derived from multiple base classes

//Base Class1
// class MyClass {
//     public:
//         void myFunction() {
//             cout << "Some conent in parent one\n";
//         }
// };

// //Base Class2
// class MyOtherClass {
//     public:
//         void myOtherFunc() {
//             cout << "Some content from parent two \n";
//         }
// };

// // Derived Class
// class MyChildClass: public MyClass, public MyOtherClass {

// };


// int main() {
//     MyChildClass myObj;
//     myObj.myFunction();
//     myObj.myOtherFunc();
//     return 0;
// }

// ACCESS SPECIFIERS - protected

class Employee {
    protected:
        int salary;
};

class Programmer: public Employee {
    public:
        int bonus;
        void setSalary(int s) {
            salary = s;
        }

        int getSalary() {
            return salary;
        }
};

int main() {
    Programmer myObj;
    myObj.setSalary(80000);
    myObj.bonus = 15000;
    cout << "Salary: " << myObj.getSalary() << endl;
    cout << "Bonus: " << myObj.bonus;
    return 0;
}