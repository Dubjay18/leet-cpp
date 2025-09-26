#include <iostream>
#include <vector>
using namespace std;

vector<int> weirdAlgo(int n) {
    vector<int> result = {3};
    int currentN = n;
    while (currentN != 1)
    {
        if (currentN % 2 == 0) {
            currentN = currentN /2;
            result.push_back(currentN);
            continue;
        } 
        currentN = (currentN * 3) + 1;
        result.push_back(currentN);
    }
    return result;
    
}
int main() {
    vector<int> res = weirdAlgo(3);
    cout << "result: ";
    for (int x : res) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}