// Access Specifiers

/*
public: members are accessible from outside the class
private: members cannot be accessed (or viewed) outside the class
protected: members cannot be accessed outside the class, however they can be accessed in inherited classes
*/

// NOTE: BY DEFAULT ALL MEMBERS OF A CLASS ARE PRIVATE, IF NO ACCESS SPECIFIER IS PROVIDED

#include <iostream>
using namespace std;

class MyClass{
    public:
        int x;
    private:
        int y;
};

int main() {
    MyClass myObj;
    myObj.x = 25;
    // myObj.y = 33; // Error: y is private
    return 0;
}