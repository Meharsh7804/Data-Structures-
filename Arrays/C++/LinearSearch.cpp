// Linear Search
#include <iostream>
using namespace std;

int LinearSearch(int array[], int size, int key){
    for (int i = 0; i < size; i++){
        if(array[i] == key)
            return i;
    }
    return -1;
}

void SearchElement(){
    int array[5] = {1, 2, 3, 4, 5};
    int key = 4;
    int size = sizeof(array) / sizeof(array[0]);
    int index = LinearSearch(array, size, key);
    if(index != -1)
        cout << "Element found at index " << index << endl;
    else
        cout << "Element not found" << endl;
}