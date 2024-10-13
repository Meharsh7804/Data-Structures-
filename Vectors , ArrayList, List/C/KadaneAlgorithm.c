// Find the Sum of Maximum Sum Subarray.{Using Kadane's Algorithm}
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <stdio.h>
#include <stdlib.h>
#define max(a, b) ((a) > (b) ? (a) : (b))

int KadaneAlgo(int arr[], int n){
    int maxSum = arr[0];
    int currSum = arr[0];
    for(int i=1;i<n;i++){
        currSum += arr[i];
        maxSum = max(maxSum,currSum);
        if(currSum < 0)
            currSum = 0;
    }
    return maxSum;
}

int main(){
    int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Maximum Sum of Subarray: %d",KadaneAlgo(arr,n));
}