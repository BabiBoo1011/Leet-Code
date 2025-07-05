#include <iostream>
#include <vector>
using namespace std;

/*class Solution1 {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int pivot = -1;

        //Kiểm tra pivot 0
        int rightSum = 0;
        for (int i = 1; i < n; i++) {
            rightSum += nums[i];
        }
        if (rightSum == 0) {
            pivot = 0;
            return pivot;
        }

        //Kiểm tra pivot từ index 1 đến n-2
        int foundPivot = 0;
        for (int i = 1; i < n; i++) {
            int leftSum = 0;
            for (int j = 0; j < i; j++) {
                leftSum += nums[j];
            }

            int rightSum = 0;
            for (int j = i + 1; j < n; j++) {
                rightSum += nums[j];
            }

            if (leftSum == rightSum) {
                foundPivot = 1;
                pivot = i;
                break;
            }
        }
        if (pivot != -1) return pivot;
        
        //Kiểm tra pivot n - 1
        int leftSum = 0;
        for (int i = 0; i < n - 1; i++) {
            leftSum += nums[i];
        }
        if (leftSum == 0) {
            pivot = n - 1;
            return pivot;
        }

        return pivot;
    }
};
*/
//1 7 3 6 5 6 
class Solution2 {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int leftSum = 0;

        int totalSum = 0;
        for (int i = 0; i < n; i++) {
            totalSum += nums[i];
        }
        for (int i = 0; i < n; i++) {
            int rightSum = totalSum - leftSum - nums[i];
            if (rightSum == leftSum) return i;
            leftSum += nums[i];
        }

        return -1;
    }
};

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    cout << "Enter arrray: ";
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    Solution2 s;
    cout << s.pivotIndex(nums);

    return 0;
}