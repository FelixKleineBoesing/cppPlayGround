#include <iostream>
#include "../include/sum.h"

int main() {
    //
    float a, b;
    a = 1.2;
    b = 3.5;
    float c = sum_(a, b);
    std::cout << c << std::endl;
}

