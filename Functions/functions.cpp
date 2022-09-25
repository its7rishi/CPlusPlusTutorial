//Functions

// #include <iostream>
// using namespace std;

// void myFunction () {
//     cout << "I was executed \n";
// }

// int main() {
//     myFunction();
//     myFunction();
//     myFunction();
//     return 0;
// }

// Declaration and Definition
/*
Declaration => The return type and the name of the myFunction
Definition => The body of the function
*/

/*
NOTE:
=> if a function is defined after the main function, the code will throw an error
=> It is possible to seperate declaration and definition for code optimization
=> Declare the function before the main function and then define it after the main function
*/

#include <iostream>
using namespace std;

// void intro(string fname = "Megan", int age = 23) {
//     cout << fname << " Doe " << age << "\n";
// }

// int main() {
//     intro("John", 45);
//     intro("Jane", 42);
//     intro("Mark", 17);
//     intro(); // will take the value from default parameter
//     return 0;
// }

// RETURN KEYWORD

// int sum(int x, int y) {
//     return x + y;
// }

// int main() {
//     cout << "The sum is: " << sum(4,5);
//     return 0;
// }


//PASS BY REFERENCE

// void swapNum(int &x, int &y) {
//     int z = x;
//     x = y;
//     y = z;
// }

// int main() {
//     int firstNum = 12;
//     int secondNum = 28;

//     cout << "Before swap: " << "\n";
//     cout << firstNum << " " << secondNum << "\n";

//     swapNum(firstNum, secondNum);

//     cout << "After swap: " << "\n";
//     cout << firstNum << " " << secondNum << "\n";


//     return 0;
// }

// PASSING ARRAYS

// void myNums(int myArr[5]) {
//     for(int i = 0; i < 5; i++) {
//         cout << myArr[i] << "\n";
//     }
// }

// int main() {
//     int nums[5] = {10, 20, 30, 40, 50};
//     myNums(nums);
//     return 0;
// }


// FUNCTION OVERLOADING
// using the same function name with different data types;

// int plusFunc(int x, int y) {
//     return x + y;
// }

// double plusFunc(double x, double y) {
//     return x + y;
// }

// string plusFunc(string x, string y) {
//     return x + y;
// }

// int main() {
//     cout << plusFunc( 5, 7) << "\n";
//     cout << plusFunc(5.6, 7.3) << "\n";
//     cout << plusFunc("John", " Doe");

//     return 0;
// }


// RECURSION
// Technique of making a function call itself;

int sum(int k) {
    if( k > 0) {
        return k + sum(k - 1);
    } else {
        return 0;
    }
}

int main() {
    int result = sum(10);
    cout << result;
    return 0;
}