// Find sum of elements in a Vector
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v = {2,4,6,8,10};
    int sum = 0;
    for(int val: v)
        sum += val;
    cout << "Sum of elements in vector: " << sum << endl;
}