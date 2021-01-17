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
    
    return 0;
}