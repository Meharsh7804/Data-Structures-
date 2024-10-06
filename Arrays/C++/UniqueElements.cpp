// Print all the unique elements in an array
#include <iostream>
using namespace std;

int main(){
    int array[] = {1, 2, 3, 4, 1, 2, 3, 4, 5};
    int size = sizeof(array)/sizeof(array[0]);

    cout << "Unique elements in the array: " << endl;
    for (int i = 0; i < size; i++){
        bool isUnique = true;
        for (int j = 0; j < size; j++){
            if (i != j && array[i] == array[j]){
                isUnique = false;
                break;
            }
        }
        if (isUnique)
            cout << array[i] << " ";
    }
}