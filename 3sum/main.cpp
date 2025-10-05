#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <unordered_map>
using namespace std;

    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        sort(nums.begin(), nums.end());
        for (int i=0; i< nums.size(); i++){
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            int anchor = nums[i];
            int l = i + 1;
            int r = nums.size() - 1;
            while (l < r) {
                if(nums[l] + nums[r] == -anchor ) {
                    result.push_back(vector<int>{anchor,nums[l],nums[r]}); 
                }
                l++;
                r--;
            }
        }
        return result;
    }

    
int main() {
    vector<int> p = {-1,0,1,2,-1,-4};
    vector<vector<int>> res = threeSum(p);
    cout << "res:";
    for (auto& r: res){
        for(auto& e: r) {
            cout << e << " ";
        }
    }
    cout << endl;
    return 0;
}



