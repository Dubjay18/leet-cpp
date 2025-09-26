#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        for (int n : nums) freq[n]++;
        vector<pair<int,int>> pairs;
        for (auto& [num, f] : freq) {
            pairs.push_back({num, f});
        }
        sort(pairs.begin(),pairs.end(), [](auto &a,auto &b){return a.second > b.second;});
        vector<int> result;
        for (int i = 0; i < k; i++) {
            result.push_back(pairs[i].first);
        }
        return result;
    }

int main() {
    vector<int> ex {1,1,1,2,2,3};
    vector<int> result = topKFrequent(ex,2);
    cout << "result: ";
    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}