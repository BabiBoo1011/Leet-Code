#include <iostream>
#include <numeric>
using namespace std;

class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        if (str1 + str2 != str2 + str1) return "";
        else {
            int len1 = str1.size();
            int len2 = str2.size();

            int gcd = std::gcd(len1, len2);
            return str1.substr(0, gcd);
        }
    }
};

int main() {
    string str1, str2;
    Solution s;

    cout << "Enter string 1: ";
    cin >> str1;
    cout << "Enter string 2: ";
    cin >> str2;
    cout << "Greatest Common Divisor of two strings: " << s.gcdOfStrings(str1, str2);
    
    return 0;
}