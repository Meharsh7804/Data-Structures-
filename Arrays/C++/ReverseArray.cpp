// Reverse elements of an array with and without using another array.
#include <iostream>
using namespace std;

void ReverseArrayWithoutAnotherArray(int array[], int size){
    int start = 0;
    int end = size - 1;
    while(start < end){
        swap(array[start], array[end]);
        start++;
        end--;
    }

    cout << "Array elements after reversing without another Array: " << endl;
    for (int i = 0; i < size; i++){
        cout << array[i] << " ";
    }
    cout << endl;
}

void ReverseArrayWithAnotherArray(int array[], int size){
    int newArray[size];
    int end = size - 1;
    for (int i = 0; i < size; i++){
        newArray[end] = array[i];
        end--;
    }

    cout << "Array elements after reversing with another Array: " << endl;
    for (int i = 0; i < size; i++){
        cout << array[i] << " ";
    }
    cout << endl;
}

int main(){
    int array[] = {1, 2, 3, 4, 5};
    int size = sizeof(array)/sizeof(array[0]);
    ReverseArrayWithoutAnotherArray(array, size);
    ReverseArrayWithAnotherArray(array, size);
}