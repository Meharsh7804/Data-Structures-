// Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.
// You must implement a solution with a linear runtime complexity and use only constant extra space.

#include <stdio.h>

int singleNumber(int* nums, int size) {
    int unique = 0;
    for (int i = 0; i < size; i++) {
        unique ^= nums[i];
    }
    return unique;
}

int main() {
    int nums[] = {4, 1, 2, 1, 2};
    int size = sizeof(nums) / sizeof(nums[0]);
    printf("%d\n", singleNumber(nums, size));
    return 0;
}