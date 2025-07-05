#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool isVowels(char c) {
        return c == 'a' or c == 'e' or c == 'i' or c == 'o' or c == 'u';
    }

    int maxVowels(string s, int k) {
        int n = s.size();

        int countVowels = 0;
        for (int i = 0; i < k; i++) {
            if (isVowels(s[i])) countVowels++;
        }

        int maxVowels = countVowels;
        for (int i = k; i < n; i++) {
            if (isVowels(s[i])) countVowels++;
            if (isVowels(s[i - k])) countVowels--;
            if (countVowels > maxVowels) maxVowels = countVowels;
        }

        return maxVowels;
    }
};

int main() {
    string s;
    cout << "Enter string: ";
    cin >> s;

    int k;
    cout << "Enter k: ";
    cin >> k;

    Solution sol;
    cout << "Result: " << sol.maxVowels(s, k);

    return 0;
}