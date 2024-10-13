// Return the indexes of elements whose sum is equal to the target.
#include <stdio.h>

void pairSum(int* v, int size, int target, int* result) {
    int start = 0;
    int end = size - 1;
    while (start < end) {
        if (v[start] + v[end] == target) {
            result[0] = start;
            result[1] = end;
            return;
        } else if (v[start] + v[end] < target) {
            start++;
        } else {
            end--;
        }
    }
    result[0] = -1;
    result[1] = -1;
}

int main() {
    int v[] = {2, 7, 11, 15};
    int target = 9;
    int result[2];
    pairSum(v, 4, target, result);
    if (result[0] != -1) {
        printf("%d, %d\n", result[0], result[1]);
    } else {
        printf("No pair found\n");
    }
    return 0;
}