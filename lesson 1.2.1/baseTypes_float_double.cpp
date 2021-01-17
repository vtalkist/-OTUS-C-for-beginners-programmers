#include <iostream>
#include <limits>

int main(int argc, char* argv[]) {

    float bad = 1 / 3;
    std::cout << "bad = " << bad << std::endl << std::endl;

    float f = 97.003f;

    std::cout << "f = " << f << std::endl;
    std::cout << "sizeof(f) = " << sizeof(f) << std::endl;
    std::cout << "float max = "
        << std::numeric_limits<float>::max()
        << std::endl;
    std::cout << std::endl;

    double d = 135.333;



    return 0;
}