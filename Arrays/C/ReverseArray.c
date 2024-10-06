// Reverse elements of an array with and without using another array.
#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void ReverseArrayWithoutAnotherArray(int array[], int size) {
    int start = 0;
    int end = size - 1;
    while (start < end) {
        swap(&array[start], &array[end]);
        start++;
        end--;
    }

    printf("Array elements after reversing without another Array: \n");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

void ReverseArrayWithAnotherArray(int array[], int size) {
    int newArray[size];
    int end = size - 1;
    for (int i = 0; i < size; i++) {
        newArray[end] = array[i];
        end--;
    }

    printf("Array elements after reversing with another Array: \n");
    for (int i = 0; i < size; i++) {
        printf("%d ", newArray[i]);
    }
    printf("\n");
}

int main() {
    int array[] = {1, 2, 3, 4, 5};
    int size = sizeof(array) / sizeof(array[0]);
    ReverseArrayWithoutAnotherArray(array, size);
    ReverseArrayWithAnotherArray(array, size);
    return 0;
}