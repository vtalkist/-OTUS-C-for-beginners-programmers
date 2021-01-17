#include <iostream>
#include <limits>

int main(int argc, char* argv[]) {

    unsigned short us = 255;

    std::cout << "us = " << us << std::endl;
    std::cout << "sizeof(us) = " << sizeof(us) << std::endl;
    std::cout << "unsigned short max = "
        << std::numeric_limits<unsigned short>::max()
        << std::endl;
    std::cout << std::endl;

    signed short ss = -15;

    std::cout << "ss = " << ss << std::endl;
    std::cout << "sizeof(ss) = " << sizeof(ss) << std::endl;
    std::cout << "signed short max = "
        << std::numeric_limits<signed short>::max()
        << std::endl;
    std::cout << std::endl;

    short s = 97;

    std::cout << "s = " << s << std::endl;
    std::cout << "sizeof(s) = " << sizeof(s) << std::endl;
    std::cout << "short max = "
        << std::numeric_limits<short>::max()
        << std::endl;
    std::cout << std::endl;

    return 0;
}