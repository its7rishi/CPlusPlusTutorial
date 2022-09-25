#include <iostream>
#include <string>

// Omitting Namespace
// instead of the "using namespace std" line, we can use
// std keyword, followed by :: operator for string (and cout) objects.

int main() {
    std::string greeting = "Good Morning";
    std::cout << greeting;
    return 0;
}