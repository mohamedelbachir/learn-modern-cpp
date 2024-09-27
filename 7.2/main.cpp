#include <iostream>
void print() // this print() lives in the global namespace
{
    std::cout << " there\n";
}

namespace Foo
{
    void print() // this print() lives in the Foo namespace
    {
        std::cout << "Hello";
    }
    void printHelloThere()
    {
        print();   // calls print() in Foo namespace
        ::print(); // calls print() in global namespace
    }
}
namespace Foo // define a namespace named Foo
{
    // This doSomething() belongs to namespace Foo
    int doSomething(int x, int y)
    {
        return x + y;
    }

}

namespace Goo // define a namespace named Goo
{
    // This doSomething() belongs to namespace Goo
    int doSomething(int x, int y)
    {
        return x - y;
    }
}

int main()
{
    std::cout << Foo::doSomething(4, 3) << '\n'; // use the doSomething() that exists in namespace Foo
    std::cout << Goo::doSomething(4, 3) << '\n'; // use the doSomething() that exists in namespace Goo
    ::print();
    Foo::print();
    Foo::printHelloThere();
    return 0;
}