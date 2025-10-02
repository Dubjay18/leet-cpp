#include <iostream>
#include <vector>
using namespace std;

vector<int> findPair(vector<int> nums, int target) {
    int l = 0;
    int r = nums.size() - 1;

    while (l< r)
    {
        int sum = nums[l] + nums[r];
        if( sum == target ) {
            return vector<int>{l,r};
        } 
        if (sum > target){
            if(nums[r] > nums[l]) {
                r--;
            } else {
                l++;
            }
        } else {
             if(nums[r] < nums[l]) {
                r--;
            } else {
                l++;
            }   
        }      
    }
    
    return {};
}


int main() {
  vector<int> s = {1, 4, 6, 8, 10};
    vector<int> res = findPair(s,9);
    cout << "result: ";
    for (int x : res) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}