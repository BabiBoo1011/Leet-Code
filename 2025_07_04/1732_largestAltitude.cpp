#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n = gain.size();
        vector<int> altitude(n + 1);
        altitude[0] = 0;
        int highest = altitude[0];
        for (int i = 1; i < n + 1; i++) {
            altitude[i] = gain[i - 1] + altitude[i - 1];
            if (altitude[i] > highest) highest = altitude[i];
        }

        return highest;
    }
};

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    vector<int> gain(n);
    cout << "Enter gain: ";
    for (int i = 0; i < n; i++) {
        cin >> gain[i];
    }
    Solution s;
    cout << s.largestAltitude(gain);
    return 0;
}