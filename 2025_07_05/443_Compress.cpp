#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int i = 0, j = 0;
        while (i < n) {
            char tmp = chars[i];
            int count = 1;
            i++;
            while (i < n and chars[i] == tmp) {
                i++;
                count++;
            }
            chars[j] = tmp;
            j++;
            if (count > 1) {
                string s = to_string(count);
                for (int i = 0; i < s.size(); i++) {
                    chars[j++] = s[i];
                }
            }
        }
        return j;
    }
};

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    vector<char> chars(n);
    for (int i = 0; i < n; i++) {
        cin >> chars[i];
    }

    Solution s;
    cout << "Result: " << s.compress(chars);

    return 0;
}