// consts.h
#include <string>
#include <map>
#ifndef MYLIB_CONSTANTS_H
#define MYLIB_CONSTANTS_H

namespace NATOLib
{
    const std::string A = "Alfa";
    const std::string B = "Bravo";
    const std::string C = "Charlie";

    const std::map<char, std::string> dict = {
       {'A', "Alfa"},
       {'B', "Bravo"},
       {'C', "Charlie"},
       {'D', "Delta"},
       {'E', "Echo"},
       {'F', "Foxtrot"},
       {'G', "Golf"},
       {'H', "Hotel"},
       {'I', "India"},
       {'J', "Juliet"},
       {'K', "Kilo"},
       {'L', "Lima"},
       {'M', "Mike"},
       {'N', "November"},
       {'O', "Oscar"},
       {'P', "Papa"},
       {'Q', "Quebec"},
       {'R', "Romeo"},
       {'S', "Sierra"},
       {'T', "Tango"},
       {'U', "Uniform"},
       {'V', "Victor"},
       {'W', "Whiskey"},
       {'X', "X-ray"},
       {'Y', "Yankee"},
       {'Z', "Zulu"}
    };
}

#endif
