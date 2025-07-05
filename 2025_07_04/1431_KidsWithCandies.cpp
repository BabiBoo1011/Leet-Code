#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int> candies, int extraCandies) {
        int len = candies.size();
        int max = candies[0];
        for (int i = 1; i < len; i++) {
            if (candies[i] > max) max = candies[i];
        }

        vector<bool> result(len);
        for (int i = 0; i < len; i++) {
            if (candies[i] + extraCandies < max) result[i] = 0;
            else result[i] = 1;
        }
        return result;
    }
};

int main() {
    int n;
    cout << "The number of kids (Enter a number in range 2 to 100): ";
    cin >> n;

    vector<int> candies(n);
    for (int i = 0; i < n; i++) {
        cout << "The number candies of the " << i + 1 << " kid: ";
        cin >> candies[i];
    }

    int extraCandies;
    cout << "Extra candies: ";
    cin >> extraCandies;

    Solution s;
    vector<bool> result = s.kidsWithCandies(candies, extraCandies);
    cout << "Result: ";
    for (int i = 0; i < n; i++) {
        cout << result[i] << " ";
    }

    return 0;
}