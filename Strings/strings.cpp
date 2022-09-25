#include <iostream>
#include <string>

using namespace std;

int main() {
    // string greeting = "Hello There";
    // cout << greeting;
    string firstName = "John";
    string lastName = "Doe";

    // Concatenation
    cout << firstName + " " + lastName << endl;

    // Append
    string fname = "Mike ", lname = "Fleming";
    cout << fname.append(lname) << "\n";

    string txt = "abcdefghijklmnopqrstuvwxyz";
    cout << "The length of the string is: " << txt.length() << "\n";

    // Accessing Strings
    string myString = "Hello";
    cout << myString[0] << endl; //outputs the first character H
    cout << myString[1] << endl; //outputs the second character e

//    Replace String characters

    string myQuote = "Hello";
    myQuote[0] = 'J';
    cout << myQuote << endl;

    // User Input strings
//    string first_name;
//    cout << "Enter your first name: ";
//    cin >> first_name;
//    cout << "Your name is: " << first_name << endl;

    // cin considers a space (whitespace, tabs, etc.) as terminating characters and hence only accepts a single word
    //To over come this, use getline()

    string full_name;
    cout << "Enter your fullname: ";
    getline(cin, full_name);
    cout << "Your name is: " << full_name << "\n";
    return 0;
}
