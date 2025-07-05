#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n);

        //prefix
        vector<int> prefix(n);
        for (int i = 0; i < n; i++) {
            prefix[i] = 1;
            if (i != 0) prefix[i] = prefix[i - 1] * nums[i - 1];
        }

        //suffix
        vector<int> suffix(n);
        for (int i = n - 1; i >= 0; i--) {
            suffix[i] = 1;
            if (i != n - 1) suffix[i] = suffix[i + 1] * nums[i + 1];
        }

        for (int i = 0; i < n; i++) {
            result[i] = prefix[i] * suffix[i];
        }

        return result;
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
    vector<int> result(n);
    result = s.productExceptSelf(nums);
    for (int i = 0; i < n; i++) {
        cout << result[i] << " ";
    }

    return 0;
}