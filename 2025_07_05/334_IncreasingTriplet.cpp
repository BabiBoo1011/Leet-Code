#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int n = nums.size();
        if (n < 3) return false;

        int firstMin = INT_MAX, secondMin = INT_MAX;
        for (int i = 0; i < n; i++) {
            if (nums[i] <= firstMin) firstMin = nums[i];
            else if (nums[i] <= secondMin) secondMin = nums[i];
            else return true;
        }

        return false;
    }
};

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    
    vector<int> nums(n);
    cout << "Enter array: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    Solution s;
    cout << "Result: " << s.increasingTriplet(nums);

    return 0;
}