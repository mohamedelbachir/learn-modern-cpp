#include <cstdint>
#include <iostream>

int main()
{
    [[maybe_unused]] constexpr std::uint8_t mask0{0b0000'0001}; // represents bit 0
    [[maybe_unused]] constexpr std::uint8_t mask1{0b0000'0010}; // represents bit 1
    [[maybe_unused]] constexpr std::uint8_t mask2{0b0000'0100}; // represents bit 2
    [[maybe_unused]] constexpr std::uint8_t mask3{0b0000'1000}; // represents bit 3
    [[maybe_unused]] constexpr std::uint8_t mask4{0b0001'0000}; // represents bit 4
    [[maybe_unused]] constexpr std::uint8_t mask5{0b0010'0000}; // represents bit 5
    [[maybe_unused]] constexpr std::uint8_t mask6{0b0100'0000}; // represents bit 6
    [[maybe_unused]] constexpr std::uint8_t mask7{0b1000'0000}; // represents bit 7

    std::uint8_t flags{0b0000'0101}; // 8 bits in size means room for 8 flags

    // testing bit if is on or off
    std::cout << "\ntesting bit if is on or off" << std::endl;
    std::cout << "bit 0 is " << (static_cast<bool>(flags & mask0) ? "on\n" : "off\n");
    std::cout << "bit 1 is " << (static_cast<bool>(flags & mask1) ? "on\n" : "off\n");

    // Setting a bit
    flags = {0b0000'0101}; // 8 bits in size means room for 8 flags

    std::cout << "\nSetting a bit" << std::endl;
    std::cout << "bit 1 is " << (static_cast<bool>(flags & mask1) ? "on\n" : "off\n");
    flags |= mask1; // turn on bit 1
    std::cout << "bit 1 is " << (static_cast<bool>(flags & mask1) ? "on\n" : "off\n");

    // Resetting a bit
    std::cout << "\nResetting a bit" << std::endl;
    flags = {0b0000'0101}; // 8 bits in size means room for 8 flags
    std::cout << "bit 2 is " << (static_cast<bool>(flags & mask2) ? "on\n" : "off\n");
    flags &= static_cast<std::uint8_t>(~mask2); // turn off bit 2
    std::cout << "bit 2 is " << (static_cast<bool>(flags & mask2) ? "on\n" : "off\n");

    // Flipping a bit
    std::cout << "\nFlipping a bit" << std::endl;
    flags = {0b0000'0101}; // 8 bits in size means room for 8 flags
    std::cout << "bit 2 is " << (static_cast<bool>(flags & mask2) ? "on\n" : "off\n");
    flags ^= mask2; // flip bit 2
    std::cout << "bit 2 is " << (static_cast<bool>(flags & mask2) ? "on\n" : "off\n");
    flags ^= mask2; // flip bit 2
    std::cout << "bit 2 is " << (static_cast<bool>(flags & mask2) ? "on\n" : "off\n");

    return 0;
}