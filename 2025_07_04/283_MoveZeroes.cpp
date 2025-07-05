#include <iostream>
#include <vector>
using namespace std;

class Solution {
public: 
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int k = 0;
        int countZeroes = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] != 0) {
                nums[k] = nums[i];
                k++;
            } else {
                countZeroes++;
            }
        }
        for (int i = 0; i < countZeroes; i++) {
            nums[k] = 0;
            k++;
        }
    }
};

int main() {
    int n;
    cout << "The number of nums: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter array nums: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    Solution s;
    s.moveZeroes(nums);
    for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }

    return 0;
}