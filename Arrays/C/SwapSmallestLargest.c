// Swap smallest & largest element from the array along with their indexes.
#include <stdio.h>

int findSmallest(int array[], int size) {
    int smallest = array[0];
    for (int i = 1; i < size; i++) {
        if (array[i] < smallest)
            smallest = array[i];
    }
    return smallest;
}

int findLargest(int array[], int size) {
    int largest = array[0];
    for (int i = 1; i < size; i++) {
        if (array[i] > largest)
            largest = array[i];
    }
    return largest;
}

int findIndex(int array[], int size, int element) {
    for (int i = 0; i < size; i++) {
        if (array[i] == element)
            return i;
    }
    return -1;
}

void SwapSmallestLargest() {
    int array[5] = {-15, 56, 90, 23, -23};
    int smallest = findSmallest(array, 5);
    int largest = findLargest(array, 5);

    int smallestIndex = findIndex(array, 5, smallest);
    int largestIndex = findIndex(array, 5, largest);

    int temp = array[smallestIndex];
    array[smallestIndex] = array[largestIndex];
    array[largestIndex] = temp;

    printf("Array elements after swapping smallest and largest elements: \n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main() {
    SwapSmallestLargest();
    return 0;
}