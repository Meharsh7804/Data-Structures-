// Find Sum & Product off all elements of the array.
#include <iostream>
using namespace std;

int SumOfArray(int array[], int size){
    int sum = 0;
    for (int i = 0; i < size; i++){
        sum += array[i];
    }
    return sum;
}

int ProductOfArray(int array[], int size){
    int pdt = 1;
    for (int i = 0; i < size; i++){
        pdt *= array[i];
    }
    return pdt;
}

int main(){
    int array[] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(array)/sizeof(array[0]);

    int sum = SumOfArray(array, size);
    int product = ProductOfArray(array, size);

    cout << "Sum of all elements of the array: " << sum << endl;
    cout << "Product of all elements of the array: " << product << endl;
}