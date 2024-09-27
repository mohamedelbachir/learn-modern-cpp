#include <iostream>

// This function will take precedence for arguments of type int
void printInt(int x)
{
    std::cout << x << '\n';
}

/*
void printInt(char) = delete; // calls to this function will halt compilation
void printInt(bool) = delete; // calls to this function will halt compilation
*/

// This function template will take precedence for arguments of other types
// Since this function template is deleted, calls to it will halt compilation
template <typename T>
void printInt(T x) = delete;

int main()
{
    printInt(97); // okay

    // printInt('a');  // compile error: function deleted
    // printInt(true); // compile error: function deleted

    // printInt(5.0); // compile error: ambiguous match

    return 0;
}