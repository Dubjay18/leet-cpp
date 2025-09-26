#include <iostream>
#include <vector>
using namespace std;

    int maxSubArray(vector<int>& nums) {
        int best = nums[0];
        int currentSum = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            if (currentSum < 0) { 
                currentSum = 0;
                best = 0;
            }
            currentSum += nums[i];
        if (currentSum > best) {
            best =  currentSum;
            }
        }
        return best;
    }

int main() {
    vector<int> ex = {-2,1,-3,4,-1,2,1,-5,4};
    int res = maxSubArray(ex);
    cout << res << " the result" << endl;
    return 0;
}