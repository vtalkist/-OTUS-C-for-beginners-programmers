# [OTUS] C++ for beginners programmers. Lesson 1.2.1 baseTypes 

This lesson about base types in C++

## Important

* By default, all constants with floating point belong to double type. For example:
    ```cpp
    #include <iostream>
    #include <typeinfo>

    int main(int argc, char* argv[]) {

        auto variableDouble = 0.45;
        auto vatiableFloat = 0.45f;
    
        std::cout << typeid(variableDouble).name() << std::endl; // output will be: d
        std::cout << typeid(vatiableFloat).name() << std::endl;  // output will be: f

        return 0;
    }
    ```
* Unsigned type in floating point variables does not exist !!!


## License
[![License: Unlicense](https://img.shields.io/badge/license-Unlicense-blue.svg)](http://unlicense.org/)
