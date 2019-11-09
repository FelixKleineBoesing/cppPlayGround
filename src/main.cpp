#include <iostream>

float sum(float a, float b) {
    return (a + b);
}

int main() {
    //
    float a, b;
    a = 1.2;
    b = 3.5;
    float c = sum(a, b);
    std::cout << c << std::endl;
}

