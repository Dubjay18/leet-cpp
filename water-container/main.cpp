#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

  int maxArea(vector<int>& height) {
    int l = 0;     
    int r = height.size()-1;
    long long max_area = 0;
    while(l < r ){
        long long area = (long long)min(height[l],height[r]) * (r - l);
        max_area = max(max_area,area);
        if (height[l] < height[r]) {
            l++;
        } else {
            r--;
        }
    }
    return max_area;
    }

int main() {

}