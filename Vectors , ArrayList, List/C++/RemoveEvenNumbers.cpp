// Remove all even numbers from a vector.
#include <iostream>
#include <vector>
using namespace std;

vector<int> RemoveEvenNumbers(vector<int> v) {
    // Use a regular for loop with an index
    for (int i = 0; i < v.size(); i++) {
        if (v[i] % 2 == 0) {
            v.erase(v.begin() + i);  // erase the even number
            i--; 
        }
    }
    return v;
}

int main() {
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    v = RemoveEvenNumbers(v);
    for (int val : v) {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}