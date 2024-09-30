#include <bitset>
#include <iostream>
// Define a new unscoped enumeration named Color
enum Color
{
    // Here are the enumerators
    // These symbolic constants define all the possible values this type can hold
    // Each enumerator is separated by a comma, not a semicolon
    red,
    green,
    blue, // trailing comma optional but recommended
}; // the enum definition must end with a semicolon
namespace Flags
{
    enum State
    {
        isHungry,
        isSad,
        isMad,
        isHappy,
        isLaughing,
        isAsleep,
        isDead,
        isCrying,
    };
}

namespace Color
{
    // The names Color, red, blue, and green are defined inside namespace Color
    enum Color
    {
        red,
        green,
        blue,
    };
}

namespace Feeling
{
    enum Feeling
    {
        happy,
        tired,
        blue, // Feeling::blue doesn't collide with Color::blue
    };
}
enum Color : std::int8_t
{
    black,
    red,
    blue,
};

int main()
{
    // Define a few variables of enumerated type Color
    //[[maybe_unused]] Color apple{red};   // my apple is red
    //[[maybe_unused]] Color shirt{green}; // my shirt is green
    //[[maybe_unused]] Color cup{blue};    // my cup is blue

    // Color socks { white }; // error: white is not an enumerator of Color
    // Color hat { 2 };       // error: 2 is not an enumerator of Color

    std::bitset<8> me{};
    me.set(Flags::isHappy);
    me.set(Flags::isLaughing);

    std::cout << std::boolalpha; // print bool as true/false

    // Query a few states (we use the any() function to see if any bits remain set)
    std::cout << "I am happy? " << me.test(Flags::isHappy) << '\n';
    std::cout << "I am laughing? " << me.test(Flags::isLaughing) << '\n';

    [[maybe_unused]] Color::Color paint{Color::blue};
    [[maybe_unused]] Feeling::Feeling me{Feeling::blue};
    return 0;
}