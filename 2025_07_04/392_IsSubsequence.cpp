#include <iostream>
#include <string>
using namespace std;

class Solution {
public: 
    bool isSubsequence(string s, string t) {
        int lenS = s.size();
        int lenT = t.size();
   
        int foundDigit = 0;
        for (int i = 0; i < lenS; i++) {
            int found = 0;
            
            for (int j = foundDigit; j < lenT; j++) {
                if (s[i] == t[j]) {
                    found = 1;
                    foundDigit = j + 1;
                    break;
                }
            }
            if (not found) return found;
        }
        return 1;
    }
};

int main() {
    string s, t;
    cout << "String s: ";
    cin >> s;
    cout << "String t: ";
    cin >> t;
    Solution sol;
    cout << sol.isSubsequence(s, t);
    return 0;
}