//Double every element in the array
#include <iostream>
using namespace std;

void DoubleArray(int array[], int size){
    for (int i = 0; i < size; i++){
        array[i] *= 2;
    }

    cout << "Array elements after doubling: " << endl;
    for (int i = 0; i < size; i++){
        cout << array[i] << " ";
    }
}

int main() {
    int array[] = {1, 2, 3, 4, 5};
    int size  = sizeof(array)/sizeof(array[0]);
    DoubleArray(array, size);
    return 0;
}