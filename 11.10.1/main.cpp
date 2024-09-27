#include <iostream>
// define your factorial() function template here
template <int T>
constexpr int factorial()
{
    static_assert(T >= 0, "factorial(T) must be non-negative");

    int result = 1;

    for (int i{2}; i <= T; ++i)
        result *= i;

    return result;
}
int main()
{
    std::cout << factorial<0>() << '\n';
    std::cout << factorial<3>() << '\n';
    std::cout << factorial<5>() << '\n';
    static_assert(factorial<0>() == 1);
    static_assert(factorial<3>() == 6);
    static_assert(factorial<5>() == 120);

    factorial<-3>(); // should fail to compile

    return 0;
}