// Find the Maximum Element in Vector.
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v = {21,3,13,433,453,3};
    int maxElement = v[0];
    for (int val : v){
        if (val > maxElement){
            maxElement = val;
        }
    }
    cout << "Max Element: " << maxElement << endl;
}