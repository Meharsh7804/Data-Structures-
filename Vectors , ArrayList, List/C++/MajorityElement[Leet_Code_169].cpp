// Find the element with majority count in the array.
// Majority element is the element that appears more than n/2 times in the array.

#include <vector>
#include <iostream>
using namespace std;

int majority(vector<int>& v) {
    int frequency = 0, ans = 0;
    for (int i = 0; i < v.size();i++){
        if(frequency == 0)
            ans = v[i];
        if(ans == v[i])
            frequency++;
        else
            frequency--;    
    }
    return ans;
}

int main() {
    vector<int> v = {1, 2, 2, 1, 1};
    int majorityElement = majority(v);
    cout << "Majority Element: " << majorityElement << endl;
    return 0;
}
