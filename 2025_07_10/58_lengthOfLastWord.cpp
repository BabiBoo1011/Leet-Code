#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size();
        int i = n - 1;
        while (i >= 0 and s[i] == ' ') {
            i--;
        }
        int length = 0;
        while (i >= 0 and s[i] != ' ') {
            length++;
            i--;
        }
        return length;    
    }
};

int main() {
    string s = "Watashi wa Dinh Duc Manh desu";
    Solution sol;
    cout << "Result: " << sol.lengthOfLastWord(s);
    return 0;
}