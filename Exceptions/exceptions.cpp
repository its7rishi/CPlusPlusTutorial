// C++ Exceptions
// If an error occurs, C++ will generate error message
// it is called Exception

// try, throw and catch
/*
    try => allows to define a block of code to be tested while execution
    throw => throws an exception when a problem is encountered. Lets us create custom errors
    catch => lets us define a block of code to be executed in case of an error

    // try and catch come in paris
*/

#include <iostream>
using namespace std;

// int main() {
//     try {
//         int age = 15;
//         if(age > 18) {
//             cout << "Access granted - you are old enough";
//         } else {
//             throw(age);
//         }
//     } catch (int myNum) {
//         cout << "Access denied - You must be atleast 18 years old.\n";
//         cout << "Age is: " << myNum;
//     }
//     return 0;
// }

// Handle any type of exception(...)

int main() {
    try {
        int age = 15;
        if(age > 18) {
            cout << "Access granted - you are old enough";
        } else {
            throw 505;
        }
    } catch (...) {
        cout << "Access denied - You must be atleast 18 years old.\n";
    }
    return 0;
}