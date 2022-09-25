#include <iostream>
using namespace std;

int main() {
    // REFERENCES
    // A reference variable is a 'reference' to an existing variable
    // Created with a & operator

    /*
    Example:
    string food = "pizza"; //food variable
    string &meal = food; // reference to food
    */

//    string food = "burger";
//    string &meal = food;

//    cout << meal << endl;
//    cout << food << endl;

//  MEMORY ADDRESS
// to access memory address of a variable, use the & operator

string food = "sandwich";

cout << &food << "\n"; // Outputs memory address of food in hexadecimal format.

return 0;
}