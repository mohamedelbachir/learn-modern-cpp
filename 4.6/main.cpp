#include <iostream>
#include <cstddef> // for std::size_t
#include <cstdint>
int main()
{
    char x{'c'};
    std::size_t s{sizeof(x)}; // sizeof returns a value of type std::size_t, so that should be the type of s
    std::cout << s << '\n';
    return 0;
}
