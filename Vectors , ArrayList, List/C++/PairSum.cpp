// Return the indexes of elements whose sum is equal to the target.

#include <iostream>
#include <vector>

using namespace std;

vector<int> pairSum(vector<int> v, int target){
    vector<int> ans;
    int start = 0;
    int end = v.size() - 1;
    while (start < end){
        if (v[start] + v[end] == target){
            ans.push_back(start);
            ans.push_back(end);
            return ans;
        }
        else if (v[start] + v[end] < target){
            start++;
        }
        else{
            end--;
        }
    }
    return ans;
}

int main(){
    vector<int> v = {2, 7, 11, 15};
    int target = 9;
    vector<int> ans = pairSum(v, target);
    cout << ans[0] << ", " << ans[1] << endl;
    return 0;
}