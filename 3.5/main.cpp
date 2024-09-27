#include <iostream>
//#define ENABLE_DEBUGGING
int getUserInput()
{
#ifdef ENABLE_DEBUGGING
    std::cerr << "getUserInput() called\n";
#endif
    std::cout << "Enter a number : " << std::endl;
    int x{};
    std::cin >> x;
    return x;
}
int main()
{
#ifdef ENABLE_DEBUGGING
    std::cerr << "main() called\n";
#endif
    int x{getUserInput()};
    std::cout << "You entered " << x << std::endl;
    return 0;
}