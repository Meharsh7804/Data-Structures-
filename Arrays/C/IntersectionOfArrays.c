// Print Intersection of 2 arrays
#include <stdio.h>

void IntersectionOfArrays(int array1[], int size1, int array2[], int size2) {
    printf("Intersection of 2 arrays: \n");
    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            if (array1[i] == array2[j]) {
                printf("%d ", array1[i]);
                break;
            }
        }
    }
    printf("\n");
}

int main() {
    int array1[] = {1, 2, 3, 4, 5};
    int array2[] = {3, 4, 5, 6, 7};
    int size1 = sizeof(array1) / sizeof(array1[0]);
    int size2 = sizeof(array2) / sizeof(array2[0]);
    IntersectionOfArrays(array1, size1, array2, size2);
    return 0;
}