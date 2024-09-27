#include <iostream>
template <typename T>
T max(T x, T y)
{
    return (x < y) ? y : x;
}

template <typename T>
T addOne(T x)
{
    return x + 1;
}

template <typename T, typename U> // We're using two template type parameters named T and U
auto maxTwo(T x, U y)             // x can resolve to type T, and y can resolve to type U
{
    return (x < y) ? y : x; // uh oh, we have a narrowing conversion problem here
}

// Use function template specialization to tell the compiler that addOne(const char*) should emit a compilation error
// const char* will match a string literal
template <>
const char *addOne(const char *x) = delete;

int main()
{
    std::cout << max<int>(4, 5) << '\n';    // instantiates and calls function max<int>(int, int)
    std::cout << max<int>(4, 3) << '\n';    // calls already instantiated function max<int>(int, int)
    std::cout << max<double>(1, 2) << '\n'; // instantiates and calls function max<double>(double, double)
    std::cout << max<>(1, 2) << '\n';       // deduces max<int>(int, int) (non-template functions not considered)
    std::cout << max(1, 2) << '\n';         // calls max(int, int)
    std::cout << addOne(1) << '\n';         // calls addOne(int, int)
    // std::cout << addOne("Hello, world!") << '\n'; // compile error
    std::cout << maxTwo(2, 3.5) << "\n";
    return 0;
}