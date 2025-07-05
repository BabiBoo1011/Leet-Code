#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        double sum = 0;
        for (int i = 0; i < k; i++) {
            sum += (double)nums[i];
        }

        double maxSum = sum;
        for (int i = k; i < n; i++) {
            sum = sum + nums[i] - nums[i - k];
            if (sum > maxSum) maxSum = sum;
        }

        return maxSum / k;
    }
};

int main() {
    int n, k;
    cout << "Enter n: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter array: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    cout << "Enter k: ";
    cin >> k;

    Solution s;
    cout << "Result: " << s.findMaxAverage(nums, k);

    return 0;
}