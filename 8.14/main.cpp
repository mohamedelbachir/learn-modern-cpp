#include <iostream>
#include "Random.h"
int main()
{
    /*

    // Seed our Mersenne Twister using steady_clock
    // std::mt19937 mt{static_cast<std::mt19937::result_type>(std::chrono::steady_clock::now().time_since_epoch().count())};
    std::mt19937 mt{std::random_device{}()};

    // Create a reusable random number generator that generates uniform numbers between 1 and 6
    std::uniform_int_distribution die6{1, 6}; // for C++14, use std::uniform_int_distribution<> die6{ 1, 6 };

    // Print a bunch of random numbers
    for (int count{1}; count <= 40; ++count)
    {
        std::cout << die6(mt) << '\t'; // generate a roll of the die here

        // If we've printed 10 numbers, start a new row
        if (count % 10 == 0)
            std::cout << '\n';
    }

    */

    // We can use Random::get() to generate random numbers

    std::cout << Random::get(1, 6) << '\n';   // returns int between 1 and 6
    std::cout << Random::get(1u, 6u) << '\n'; // returns unsigned int between 1 and 6

    // The following uses a template type argument
    // See https://www.learncpp.com/cpp-tutorial/function-template-instantiation/
    std::cout << Random::get<std::size_t>(1, 6u) << '\n'; // returns std::size_t between 1 and 6

    // We can access Random::mt directly if we have our own distribution

    // Let's create a reusable random number generator that generates uniform numbers between 1 and 6
    std::uniform_int_distribution die6{1, 6}; // for C++14, use std::uniform_int_distribution<> die6{ 1, 6 };
    for (int count{1}; count <= 10; ++count)
    {
        std::cout << die6(Random::mt) << '\t'; // generate a roll of the die here
    }

    std::cout << '\n';

    return 0;
}