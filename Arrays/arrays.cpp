#include <iostream>
#include <string>
using namespace std;

int main() {
    // Arrays
    // Syntax <variableType> <name> [<no of elements] = <value>
    // Example: string cars[4] = {"Audi", "Saab", "Ferrari", "Bugati"}

    // string cars[4] = {"Audi", "BMW", "Saab", "Volvo"};

    // for(int i = 0; i < 4; i++) {
    //     cout << cars[i] << "\n";
    // }

    // OMIT ARRAY SIZE
    //if size is not mentioned, the array will be as big as the values inserted

    //  string cars[] = {"Audi", "BMW", "Skoda"} // length will be 3 as 3 elements inserted.
     // to insert extra elements, the array will have to be overwritten

     int nums[6] = {1,2,3,4}; 
     // since the no of elements is less thant the specified length
     // the array will accept the 5th and 6th element without overwriting

    //  string friends[5];
    //  friends[0] = "Gary";
    //  friends[1] = "Noble";

    // GET SIZE OF AN ARRAY = sizeof()

    int myNums[10] = {0,1,2,3,4,5,6,7,8,9};

    cout << sizeof(myNums) << endl; // 40 - sizeof operator returns size in bytes
    // to find array length divide the size of array by the size of data type

    cout << "The length of the array is: " << sizeof(myNums) / sizeof(int) << "\n";


    return 0;
}