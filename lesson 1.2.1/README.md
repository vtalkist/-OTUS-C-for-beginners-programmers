# [OTUS] C++ for beginners programmers. Lesson 1.2.1 baseTypes 

This lesson about base types in C++

## Important
* By default, all integers constants belong to integer type. For example:
    ```cpp
    #include <iostream>
    #include <typeinfo>

    int main(int argc, char* argv[]) {

        auto variableInt = 5; // default
        float variableFloatDivition = 5 / 3; // result will be 0 as float
        auto variableDoubleDivition = 5.0 / 3; // result will be 0.333333 as double type
        auto variableFloatDivitionWitchCharacter = 5.f / 3; // result will be 0.333333 as float type

        std::cout << typeid(variableInt).name() << std::endl; // default output will be: i
        std::cout << typeid(variableFloatDivition).name() << std::endl; // output will be: f
        std::cout << typeid(variableDoubleDivition).name() << std::endl; // output will be: d
        std::cout << typeid(variableFloatDivitionWitchCharacter).name() << std::endl; // // output will be: f

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

* Character arrays are overridden by the C ++ standard. Only character arrays do not contain a pointer, and the compiler generates code that outputs all characters.
    ```cpp
    #include <iostream>
    #include <typeinfo>

    int main(int argc, char* argv[]) {

        int intArray[] = {0, 1, 2, 3, 4, 5, 6};
        char symbArray[] = {'H', 'e', 'l', 'l', 'o', '!', '\0'};
        
        std::cout << "intArray = " << intArray << std::endl; // output will be some value of addres
        std::cout << "symbArray = " << symbArray << std::endl; // output will be: Hello!
        

        return 0;
    }
    ```


## License
[![License: Unlicense](https://img.shields.io/badge/license-Unlicense-blue.svg)](http://unlicense.org/)
