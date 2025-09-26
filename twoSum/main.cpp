#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> map;
    for (int i = 0; i < nums.size(); i++) {
        int diff;
        diff =  target - nums[i];
        if (map.find(diff) != map.end()) {
          
            return  vector<int>{i,map[diff]};
        }

        map[nums[i]] = i;
    }    
    return vector<int>{};
}

int main () {
    vector<int> ex = {2, 7, 11, 15};
  vector<int>  result ;
  result = twoSum(ex,9);
  cout << "the solution" << result[0] << result[1] << endl;
    return 0;
}