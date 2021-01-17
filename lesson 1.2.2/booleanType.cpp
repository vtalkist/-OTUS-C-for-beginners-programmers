#include <iostream>

int main(int argc, char* argvp[]) {

    bool goodCase = true;
    bool badCase = false;

    bool convertion_1 = 1;
    bool convertion_2 = 0;
    bool convertion_3 = 0.12345; // always if bool variable != 0, it will be true

    std::cout << "convertion_1 = " << convertion_1 << std::endl;
    std::cout << "convertion_2 = " << convertion_2 << std::endl;
    std::cout << "convertion_3 = " << convertion_3 << std::endl;

    return 0;
}