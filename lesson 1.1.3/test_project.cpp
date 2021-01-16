#include <iostream>
#include <string>

#include "version.h"

int main(int argc, char * argv[]) {

    std::cout << "Hello, World!" << std::endl;
    std::cout << "Version: " << test::getVersion << std::endl;
    return 0;
}