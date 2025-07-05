#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string reverseWord(string s) {
        string result;
        int len = s.size();
        result.reserve(len);
        int i = len - 1;
        while (i >= 0) {
            // Bỏ qua dấu cách
            while (i >= 0 && s[i] == ' ') i--;
            if (i < 0) break;

            //k là cuối từ
            int k = i;
            // j là đầu từ
            while (i >= 0 && s[i] != ' ') i--;
            int j = i + 1;

            result += s.substr(j, k - j + 1);
            result += " ";
        }

        // Xóa dấu cách cuối cùng
        result = result.substr(0, result.size() - 1);

        return result;
    }
};

int main() {
    Solution s;
    string str;

    cout << "Enter a string: ";
    getline(cin, str);
    cout << "Result: " << s.reverseWord(str);
    return 0;
}