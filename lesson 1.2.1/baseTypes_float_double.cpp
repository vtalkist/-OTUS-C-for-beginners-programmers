#include <iostream>
#include <limits>

int main(int argc, char* argv[]) {

    float bad = 1 / 3;
    float good = 1.f / 3; 

    std::cout << "bad = " << bad << std::endl << std::endl;
    std::cout << "good = " << good << std::endl << std::endl;

    float f = 97.003f;

    std::cout << "f = " << f << std::endl;
    std::cout << "sizeof(f) = " << sizeof(f) << std::endl;
    std::cout << "float max = "
        << std::numeric_limits<float>::max()
        << std::endl;
    std::cout << std::endl;

    double d = 135.333;

    std::cout << "d = " << d << std::endl;
    std::cout << "sizeof(d) = " << sizeof(d) << std::endl;
    std::cout << "double max = "
        << std::numeric_limits<double>::max()
        << std::endl;
    std::cout << std::endl;

    long double ld = 192.159;

    std::cout << "ld = " << ld << std::endl;
    std::cout << "sizeof(ld) = " << sizeof(ld) << std::endl;
    std::cout << "long double max = "
        << std::numeric_limits<long double>::max()
        << std::endl;
    std::cout << std::endl;

    return 0;
}