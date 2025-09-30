#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int findMinSubArray(vector<int> nums, int s) {
    int n = nums.size();
    int minLen = INT_MAX;
    int sum = 0;
    int l = 0;
    
    for (int r = 0; r < n; r++) {
        sum += nums[r];
        while (sum >= s && l <= r) {
            minLen = min(minLen, r - l + 1);
            sum -= nums[l];
            l++;
        }
    }
    
    return minLen == INT_MAX ? 0 : minLen;
}


int main() {
    int result = findMinSubArray(vector<int>{2, 1, 5, 2, 3, 2},7 );
    cout << "result: " << result << endl; 
    return 0;
}