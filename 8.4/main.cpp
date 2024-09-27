#include <iostream>

int main()
{
    constexpr double gravity{9.8};

    if constexpr (gravity == 9.8)            // now using constexpr if
        std::cout << "Gravity is normal.\n"; // it's be at compile time
    else
        std::cout << "We are not on Earth.\n";

    return 0;
}