// Reverse an Array
#include <stdio.h>

void ReverseArray(int* v, int size) {
    int start = 0;
    int end = size - 1;
    while (start < end) {
        int temp = v[start];
        v[start] = v[end];
        v[end] = temp;
        start++;
        end--;
    }
}

int main() {
    int v[] = {1, 2, 3, 4, 5};
    int size = sizeof(v) / sizeof(v[0]);
    ReverseArray(v, size);
    for (int i = 0; i < size; i++) {
        printf("%d ", v[i]);
    }
    return 0;
}