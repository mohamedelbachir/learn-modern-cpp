#include <iostream>
int getValue()
{
    std::cout << "Enter an integer : ";
    int x{};
    std::cin >> x;
    return x;
}
constexpr bool isEven(int x)
{
    return (x % 2) == 0;
}
int main()
{
    int n = getValue();
    if (!isEven(n))
    {
        std::cout << n << " is odd" << std::endl;
    }
    else
    {
        std::cout << n << " is even" << std::endl;
    }
    return 0;
}