#include <iostream>
#define PRINT_JOE
#define PRINT_ME
int main()
{
#ifdef PRINT_JOE
    std::cout << "Joe" << std::endl;
#endif
#ifdef PRINT_JOHN
    std::cout << "john" << std::endl;
#endif
#if defined(PRINT_ME)
    std::cout << "Me" << std::endl;
#endif
    std::cout << "Final ouput" << std::endl;
    return 0;
}
