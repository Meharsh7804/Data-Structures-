// Find the element with majority count in the array.
// Majority element is the element that appears more than n/2 times in the array.
#include <stdio.h>

int majority(int* v, int size) {
    int frequency = 0, ans = 0;
    for (int i = 0; i < size; i++) {
        if (frequency == 0)
            ans = v[i];
        if (ans == v[i])
            frequency++;
        else
            frequency--;
    }
    return ans;
}

int main() {
    int v[] = {1, 2, 2, 1, 1};
    int size = sizeof(v) / sizeof(v[0]);
    int majorityElement = majority(v, size);
    printf("Majority Element: %d\n", majorityElement);
    return 0;
}