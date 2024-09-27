#include <cmath> // for std::sqrt
#include <iostream>

template <double D> // requires C++20 for floating point non-type parameters
double getSqrt()
{
    static_assert(D >= 0.0, "getSqrt(): D must be non-negative");

    if constexpr (D >= 0)    // ignore the constexpr here for this example
        return std::sqrt(D); // strangely, std::sqrt isn't a constexpr function (until C++26)

    return 0.0;
}

template <auto N> // deduce non-type template parameter from template argument
void print()
{
    std::cout << N << '\n';
}
int main()
{
    std::cout << getSqrt<5.0>() << '\n';
    // std::cout << getSqrt<-5.0>() << '\n';
    print<5>();   // N deduced as int `5`
    print<'c'>(); // N deduced as char `c`
    return 0;
}