#include <iostream>
using namespace std;

class Solution {
public: 
    int mySqrt(int x) {
        if (x < 2) return x;
        int i = 1;
        for (i ; i < x/2; i++) {
            if ((long)i*i <= x and (long)(i+1) * (i+1) > x) break;
        }
        return i;
    }
};

int main() {
    int x;
    cout << "Enter x: ";
    cin >> x;
    
    Solution s;
    cout << "Result: " << s.mySqrt(x);
    return 0;
}