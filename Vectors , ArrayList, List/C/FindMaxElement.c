// Find max element in a array.
#include <stdio.h>

int main() {
    int v[] = {21, 3, 13, 433, 453, 3};
    int size = sizeof(v) / sizeof(v[0]);
    int maxElement = v[0];
    for(int i = 1; i < size; i++) {
        if(v[i] > maxElement) {
            maxElement = v[i];
        }
    }
    printf("Max Element: %d\n", maxElement);
    return 0;
}