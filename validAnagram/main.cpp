#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


bool isAnagram(string s, string t) {
    // If strings have different lengths, they can't be anagrams
    if (s.size() != t.size()) {
        return false;
    }
    
    vector<char> first;
    vector<char> second;

    for (int i = 0; i < s.size(); i++) {
        first.push_back(s[i]);
        second.push_back(t[i]);
    } 
    sort(first.begin(), first.end());
    sort(second.begin(), second.end());
    return first == second;
}

int main() {

}