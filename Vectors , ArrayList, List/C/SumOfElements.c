// Find sum of all elements in an array.
#include <stdio.h>

int main() {
    int v[] = {2, 4, 6, 8, 10};
    int sum = 0;
    int size = sizeof(v) / sizeof(v[0]);
    for(int i = 0; i < size; i++) {
        sum += v[i];
    }
    printf("Sum of elements in array: %d\n", sum);
    return 0;
}