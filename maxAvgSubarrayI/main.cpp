#include <iostream>
#include <vector>
using namespace std;

    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        long long windowSum = 0;
        for (int i = 0; i < n; i++) {
            windowSum += nums[i];
        }
        long long maxSum = windowSum;
        for  (int r=k; r < n; r++) {
            windowSum += nums[r] - nums[r - k];
            maxSum = max(maxSum, windowSum);
        }

        return double(maxSum)/k;
    }


int main() {

    return 0;
}