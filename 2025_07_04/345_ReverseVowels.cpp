#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    string reverseVowels(string s) {
        int len = s.size();

        int count = 0;
        vector<char> vowels(len);
        for (int i = 0; i < len; i++) {
            if (s[i] == 'a' or s[i] == 'e' or s[i] == 'i' or s[i] == 'o' or s[i] == 'u' or s[i] == 'A' or s[i] == 'E' or s[i] == 'O' or s[i] == 'I' or s[i] == 'U') vowels[count++] = s[i];
        }

        for (int i = 0; i < count/2; i++) {
            char tmp;
            tmp = vowels[i];
            vowels[i] = vowels[count - 1 - i];
            vowels[count - 1 - i] = tmp;
        }

        int j = 0;
        for (int i = 0; i < len; i++) {
            if (s[i] == 'a' or s[i] == 'e' or s[i] == 'i' or s[i] == 'o' or s[i] == 'u' or s[i] == 'A' or s[i] == 'E' or s[i] == 'O' or s[i] == 'I' or s[i] == 'U') s[i] = vowels[j++];
        }
        return s;
    }
};

int main () {
    string s;
    cout << "Enter a string: ";
    cin >> s;
    Solution solution;
    cout << "Result: " << solution.reverseVowels(s);
    return 0;
}