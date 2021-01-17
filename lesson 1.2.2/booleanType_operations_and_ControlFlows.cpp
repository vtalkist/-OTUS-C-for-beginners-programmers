#include <iostream>

void cpp17(void);

int main(int argc, char* argvp[]) {

    bool condiotion = true;
    bool badCase = false;
    
    bool andResult = condiotion && badCase; // false
    bool orResult = condiotion || badCase;  // true

    andResult = condiotion and badCase;     // false
    orResult = condiotion or badCase;       // true

    cpp17();
    return 0;
}

void cpp17(void) {
    std::cout << "cpp17 example" << std::endl;

    bool condition = true;

    if(int someVariable = 422; condition) { // с++17 feature standard, to declare variable in conditional scope
        std::cout << "first if. someVariable = " << someVariable << std::endl;
    }
    else {
        std::cout << "first else. someVariable = " << someVariable << std::endl;
    }
}