
#include <stdio.h>
#include "sum.h"
#include "mergeSort.h"
#


int main() {
    float a, b;
    a = 1.2;
    b = 3.5;
    float c = sum_custom(a, b);
    printf("Sum is: %f", c);

    std::vector<int> vec { 8, 5, 4, 10, 2, 7, 9};
    mergeSort(vec);
    int size = vec.size();
    for (int i = 0; i != size; ++i)
        printf("%d", vec[i]);
}

