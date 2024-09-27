#include <string>  // for std::string
#include <vector>  // for std::vector
#include <utility> // for std::pair

using VectPairSI = std::vector<std::pair<std::string, int>>; // make VectPairSI an alias for this crazy type

bool hasDuplicates(VectPairSI pairlist) // use VectPairSI in a function parameter
{
    // some code here
    return false;
}

typedef int (*FcnType)(double, char);  // FcnType hard to find
using FcnType = int (*)(double, char); // FcnType easier to find
int main()
{
    using Miles = long; // define Miles as an alias for type long
    using Speed = long; // define Speed as an alias for type long

    Miles distance{5}; // distance is actually just a long
    Speed mhz{3200};   // mhz is actually just a long

    // The following is syntactically valid (but semantically meaningless)
    distance = mhz;

    VectPairSI pairlist; // instantiate a VectPairSI variable

    return 0;
}