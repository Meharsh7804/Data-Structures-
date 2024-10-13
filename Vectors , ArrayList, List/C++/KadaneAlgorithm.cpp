// Find the Sum of Maximum Sum Subarray.{Using Kadane's Algorithm}
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int Kadane_Alogirithm(vector<int> &arr){
    int n = arr.size();
    int maxSum = arr[0];
    int currSum = arr[0];
    for (int i = 1; i < n; i++){
        currSum = max(arr[i], currSum + arr[i]);
        maxSum = max(maxSum, currSum);
    }
    return maxSum;
}

int main(){
    vector<int> arr = {-2, -3, 4, -1, -2, 1, 5, -3};
    cout << "Maximum Sum of Subarray: " << Kadane_Alogirithm(arr) << endl;
    return 0;
}