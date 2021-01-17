#include <iostream>
#include <limits>

int main(int argc, char* argv[]) {

    unsigned char uc = 255;

    std::cout << "uc = " << +uc << std::endl;
    std::cout << "sizeof(uc) = " << sizeof(uc) << std::endl;
    std::cout << "unsigned char max = "
        << +std::numeric_limits<unsigned char>::max()
        << std::endl;
    std::cout << std::endl;
    
    signed char sc = -15;

    std::cout << "uc = " << +sc << std::endl;
    std::cout << "sizeof(sc) = " << sizeof(sc) << std::endl;
    std::cout << "signed char max = "
        << +std::numeric_limits<signed char>::max()
        << std::endl;
    std::cout << std::endl;

    signed char c = 97;

    std::cout << "c = " << +c << std::endl;
    std::cout << "sizeof(sc) = " << sizeof(c) << std::endl;
    std::cout << "signed char max = "
        << +std::numeric_limits<char>::max()
        << std::endl;
    std::cout << std::endl;
    
    return 0;
}