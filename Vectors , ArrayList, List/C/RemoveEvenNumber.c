#include <stdio.h>

void RemoveEvenNumbers(int* v, int* size) {
    int j = 0;
    for (int i = 0; i < *size; i++) {
        if (v[i] % 2 != 0) {
            v[j++] = v[i];
        }
    }
    *size = j;
}

int main() {
    int v[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(v) / sizeof(v[0]);
    RemoveEvenNumbers(v, &size);
    for (int i = 0; i < size; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
    return 0;
}