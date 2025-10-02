#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


    string longestPalindrome(string s) {
        string result;
        int maxLen = 0;

        for(int i =0; i < s.size(); i++){
            // Check for odd length palindromes
            int l = i, r = i;
            while (l >=0 && r < s.size() && s[l] == s[r] ) {
                if(r - l + 1 > maxLen) {
                    result = s.substr(l, r - l + 1);
                    maxLen = r - l + 1; 
                }
                l--;
                r++;
            }
            
            // Check for even length palindromes
            l = i;
            r = i + 1;
            while (l >=0 && r < s.size() && s[l] == s[r] ) {
                if(r - l + 1 > maxLen) {
                    result = s.substr(l, r - l + 1);
                    maxLen = r - l + 1; 
                }
                l--;
                r++;
            }
        }
        
        return result;
    }



int main() {
 
}