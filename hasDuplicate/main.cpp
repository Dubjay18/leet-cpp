#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

    bool containsDuplicate(vector<int>& nums) {
          unordered_set<int>  set; 
        for (size_t i = 0; i < nums.size(); i++) {
            if (set.find(nums[i]) != set.end()){
                return true;
            }
            set.insert(nums[i]);
        }
        return false;
    }
int main() {
vector<int> nums;
bool ans;
ans = containsDuplicate(nums);
cout << "the solution" << ans << endl;
    return 0;
}
