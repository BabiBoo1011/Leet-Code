#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int longestSubarray(vector<int>& height) {
        int n = height.size();

        int left = 0, right = n - 1;
        int maxArea = 0;
        while (left < right) {
            int w = right - left;
            int h = min(height[left], height[right]);
            int area = w * h;
            if (area > maxArea) maxArea = area;

            if (height[left] < height[right]) left++;
            else right--; 
        }

        return maxArea;
    }
};

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    vector<int> height(n);
    cout << "Enter array: ";
    for (int i = 0; i < n; i++) {
        cin >> height[i];
    }

    Solution s;
    cout << "Result: " << s.longestSubarray(height);

    return 0;
}