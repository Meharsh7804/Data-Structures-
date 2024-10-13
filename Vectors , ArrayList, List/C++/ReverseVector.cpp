// Reverse a Vector
#include <iostream>
#include <vector>
using namespace std;

vector<int> ReverseVector(vector<int>& v){
    int size = v.size();
    int start = 0;
    int end = size - 1;
    for (int i = start; i < end; i++){
        swap(v[i], v[end]);
        end--;
    }
    return v;
}

int main(){
    vector<int> v = {1, 2, 3, 4, 5}; 
    vector<int> reversed = ReverseVector(v);
    for (int i = 0; i < reversed.size(); i++){
        cout << reversed[i] << " ";
    }
    return 0;
}