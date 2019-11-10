
#include <stdio.h>
#include "sum.h"
#include "mergeSort.h"


int main() {
    float a, b;
    a = 1.2;
    b = 3.5;
    float c = sum_custom(a, b);
    printf("Sum is: %f", c);
    
    int arr[] = { 8, 5, 4, 10, 2, 7, 9};
    int n = sizeof(arr) / sizeof(arr[0]); 
    std::vector<int> vect(arr, arr + n); 
    std::vector<int> vec{ 8, 5, 4, 10, 2, 7, 9};
    printf("%d", vec[0]);
    mergeSort(vec);
    int size = vec.size();
    for (int i = 0; i != size; ++i)
        printf("%d", vec[i]);
}

