// C++ Files

// the <fstream> library allows us to work with files
// to include <fstram> library, include both <iostream> and <fstream> header file.

// <fstream> library has 3 classes

/*
 1. ofstream = Creates and writes files
 2. ifstream = Reads from files
 3. fstream = Creates, reads and writes files.
*/

#include <iostream>>
#include <fstream>>
using namespace std;

int main() {
    //Create and open a file

    // ofstream MyFile("filename.txt");

    // // Write to the file

    // MyFile << "Files can be tricky, but it is fun enough!";

    // // Close the file
    // MyFile.close();     //It is good practice to always to close a file.


    // Read a file

    // Create a string which is used to outpur the text in file
    string myText;

    // Read from the text file
    ifstream MyReadFile("filename.txt");

    //Use while loop together with getline() function to read the file line by line
    while(getline(MyReadFile, myText)) {
        //Output text from file
        cout << myText;
    }

    // Close the file
    MyReadFile.close();

}