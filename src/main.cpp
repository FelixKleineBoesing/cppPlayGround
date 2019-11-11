#include <iostream>
#include <stdio.h>
#include "sum.h"
#include "mergeSort.h"


int main() {
    std::cout << "bla" << std::endl;
    float a, b;
    a = 1.2;
    b = 3.5;
    float c = sum_custom(a, b);
    std::cout << "Sum is " + std::to_string(c) << std::endl;
    
    int arr[] = { 8, 5, 4, 10, 2, 7, 9};
    int n = sizeof(arr) / sizeof(arr[0]); 
    std::vector<int> vect(arr, arr + n); 
    std::vector<int> vec{ 8, 5, 4, 10, 2, 7, 9};
    std::cout << "vector element zero is " + std::to_string(vec[0]) << std::endl;
    mergeSort(vec);
    int size = vec.size();
    for (int i = 0; i != size; ++i)
        std::cout << "vector element" + std::to_string(i) +  "is " + std::to_string(vec[i]) << std::endl;
}

