// Find Sum & Product off all elements of the array.
// Find Sum & Product off all elements of the array.
#include <stdio.h>

int SumOfArray(int array[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += array[i];
    }
    return sum;
}

int ProductOfArray(int array[], int size) {
    int pdt = 1;
    for (int i = 0; i < size; i++) {
        pdt *= array[i];
    }
    return pdt;
}

int main() {
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(array) / sizeof(array[0]);

    int sum = SumOfArray(array, size);
    int product = ProductOfArray(array, size);

    printf("Sum of all elements of the array: %d\n", sum);
    printf("Product of all elements of the array: %d\n", product);

    return 0;
}