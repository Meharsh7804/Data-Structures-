// Double every element in the array
#include <stdio.h>

void DoubleArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        array[i] *= 2;
    }

    printf("Array elements after doubling: \n");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main() {
    int array[] = {1, 2, 3, 4, 5};
    int size = sizeof(array) / sizeof(array[0]);
    DoubleArray(array, size);
    return 0;
}