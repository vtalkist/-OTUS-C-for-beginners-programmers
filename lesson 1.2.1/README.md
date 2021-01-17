# [OTUS] C++ for beginners programmers. Lesson 1.2.1 baseTypes 

This lesson about base types in C++

## Important
* By default, all integers constants belong to integer type. For example:
    ```cpp
    #include <iostream>
    #include <typeinfo>

    int main(int argc, char* argv[]) {

        auto variableInt = 5; // default
        float = 5 / 3; // result will be 0
        float = 5.f / 3; // result will be 0.333333

        std::cout << typeid(variableInt).name() << std::endl; // default output will be: i

        return 0;
    }
    ```
* By default, all constants with floating point belong to double type. For example:
    ```cpp
    #include <iostream>
    #include <typeinfo>

    int main(int argc, char* argv[]) {

        auto variableDouble = 0.45; // default
        auto vatiableFloat = 0.45f; // the type is specially specified here by the f character after initialize number
    
        std::cout << typeid(variableDouble).name() << std::endl; // default output will be: d
        std::cout << typeid(vatiableFloat).name() << std::endl;  // output will be: f

        return 0;
    }
    ```
* Unsigned type in floating point variables does not exist !!!


## License
[![License: Unlicense](https://img.shields.io/badge/license-Unlicense-blue.svg)](http://unlicense.org/)
