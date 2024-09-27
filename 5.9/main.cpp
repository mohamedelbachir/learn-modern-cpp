#include <iostream>
#include <string>      // For std::string and std::getline
#include <string_view> // C++17

void printString(std::string str) // str makes a copy of its initializer
{
    std::cout << str << '\n';
}

// str provides read-only access to whatever argument is passed in
void printSV(std::string_view str) // now a std::string_view
{
    std::cout << str << '\n';
}

int main()
{
    printSV("Hello, world!"); // call with C-style string literal

    std::string s2{"Hello, world with string !"};
    printSV(s2); // call with std::string

    // std::cout << "Enter your full name: ";
    // std::string name{};
    // std::ws  avoid left space
    // std::getline(std::cin >> std::ws, name); // read a full line of text into name

    // std::cout << "Enter your favorite color: ";
    // std::string color{};
    // std::getline(std::cin >> std::ws, color); // read a full line of text into color

    // std::cout << "Your name is " << name << " and your favorite color is " << color << '\n';

    return 0;
}