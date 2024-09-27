#include <bitset>
#include <iostream>

// "rotl" stands for "rotate left"
std::bitset<4> rotl(std::bitset<4> bits)
{
    std::bitset result = bits << 1;
    if (bits.test(3) && !result.test(3))
    {
        result.set(0);
    }
    return result;
}
std::bitset<4> rotl2(std::bitset<4> bits)
{
    // bits << 1 does the left shift
    // bits >> 3 handle the rotation of the leftmost bit
    return (bits << 1) | (bits >> 3);
}
int main()
{
    std::bitset<4> bits1{0b0001};
    std::cout << "1) " << rotl(bits1) << '\n';
    std::cout << "2) " << rotl2(bits1) << '\n';

    std::bitset<4> bits2{0b1001};
    std::cout << "1)" << rotl(bits2) << '\n';
    std::cout << "2) " << rotl2(bits2) << '\n';

    return 0;
}