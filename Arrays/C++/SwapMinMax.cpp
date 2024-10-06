// Swap smallest & largest element from the array along with their indexes.
#include <iostream>
using namespace std;

int findSmallest(int array[], int size){
    int smallest = array[0];
    for (int i = 1; i < size; i++){
        if(array[i] < smallest)
            smallest = array[i];
    }
    return smallest;
}

int findLargest(int array[], int size){
    int largest = array[0];
    for (int i = 1; i < size; i++){
        if(array[i] > largest)
            largest = array[i];
    }
    return largest;
}

int findIndex(int array[], int size, int element){
    for (int i = 0; i < size; i++){
        if(array[i] == element)
            return i;
    }
    return -1;
}

void SwapSmallestLargest(){
    int array[5] = {-15, 56, 90, 23, -23};
    int smallest = findSmallest(array, 5);
    int largest = findLargest(array, 5);

    swap(array[findIndex(array, 5, smallest)], array[findIndex(array, 5, largest)]);

    cout << "Array elements after swapping smallest and largest elements: " << endl;
    for (int i = 0; i < 5; i++){
        cout << array[i] << " ";
    }
    
}

int main() {
    SwapSmallestLargest();
    return 0;
}