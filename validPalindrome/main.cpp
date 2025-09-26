#include <iostream>
#include <vector>
#include <algorithm>
#include <cctype>
#include <string>
using namespace std;


string toLower(const string& s) {
    string result = s;
    transform(result.begin(), result.end(), result.begin(),
              [](unsigned char c){ return tolower(c); });
    return result;
}



string removeAlphanumerics(const std::string& input) {
    string result = input;
    result.erase(
        remove_if(result.begin(), result.end(),
            [](unsigned char c) { return !isalnum(tolower(c)); }),
        result.end()
    );
    return toLower(result);
}

    bool isPalindrome(string s) {
       string plainString = removeAlphanumerics(s);
       string savedString = plainString;
       reverse(plainString.begin(),plainString.end());
       cout << plainString << "plainstring after reversal" << endl;
       return plainString == savedString;

    }

int main() {

    return 0;
}