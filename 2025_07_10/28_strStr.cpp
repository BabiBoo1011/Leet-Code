#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
    int strStr(string haystack, string needle) {
        int result = -1;
        int n = haystack.size();
        int m = needle.size();

        int i = 0;
        while (i < n) {
            if (haystack[i] == needle[0]) {
                int k = i;
                int j = 0;
                result = i;
                while (j < m) {
                    if (haystack[k] != needle[j]) {
                        result = -1;
                        break;
                    } else {
                        k++;
                        j++;
                    }
                }
                if (result != -1) return result;
            }
            i++;
        }
        return result;
    }
};

int main() {
    string haystack, needle;
    cout << "Enter haystack: ";
    cin >> haystack;
    cout << "Enter needle: ";
    cin >> needle;

    Solution s;
    cout << "Result: " << s.strStr(haystack, needle) << endl;
    return 0;
}