#include <iostream>
using namespace std;

int main () {
    // POINTERS
    //Stores memory address as a value
    // point to a data type of the same type
    // address of the variable is assigned to the pointer
    // created with the * operator

    // string food = "Noodles"; // A food variable of type string
    // string* ptr = &food; // pointer variable 'ptr' stores the address of 'food'

    // //Output value of food
    // cout << food << endl;

    // //Output value of memory address of food
    // cout << &food << endl;

    // //Output of food memory address with pointer 'ptr'
    // cout << ptr << endl;

    // DEREFERENCE
    // use the pointer to get value of the variable
    // use the * (dereference) operator

    // string food = "Pizza";
    // string* ptr = &food;

    // cout << ptr << "\n"; // Outputs the memory address of food pointer (ptr).

    // cout << *ptr << "\n"; // Outputs the value of food with the pointer

    // MODIFY POINTER VALUE
    // We can modify pointer value 
    // Beware that it will also change the value of the original variable

    string car = "Bugatti";
    string* ptr = &car;

    // value of car
    cout << car << endl;

    // memory address of car
    cout << &car << endl;

    // Output value of car using pointer dereference
    cout << *ptr << endl;

    // Change the value of pointer

    *ptr = "Camaro";

    // Output new value of pointer
    cout << *ptr << endl;

    // Output value of original variable
    cout << car << endl;



    return 0;
}