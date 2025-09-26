#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> group;
        for (auto& v:  strs){
            vector<char> letters(v.begin(), v.end());
           sort(letters.begin(),letters.end());
           string key(letters.begin(), letters.end());
            group[key].push_back(v);
        }
        
        vector<vector<string>> result;
        for (auto& pair : group) {
            result.push_back(pair.second);
        }
        return result;
    }


int main() {

}