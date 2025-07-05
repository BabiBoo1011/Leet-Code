#include <iostream>
#include <vector>
using namespace std;

class Solution {
    public:
        bool canPlaceFlowers(vector<int>& flowerbed, int n) {
            int size = flowerbed.size();
            int count = 0;
            if (size == 1 and flowerbed[0] == 0) {
                count++;
            }
            if (size >= 2) {
                if (flowerbed[0] == 0 and flowerbed[1] == 0) {
                flowerbed[0] = 1;
                count++;
                }
                for (int i = 1; i < size - 1; i++) {
                    if (flowerbed[i] == 0 and flowerbed[i - 1] == 0 and flowerbed[i + 1] == 0) {
                        flowerbed[i] = 1;
                        count++;
                    }
                }
                if (flowerbed[size - 1] == 0 and flowerbed[size - 2] == 0) {
                    flowerbed[size - 1] = 1;
                    count++;
                }
            }
            return count >= n;
        }
    };

int main() {
    int n;
    cout << "The number of flowerbeds: ";
    cin >> n;
    
    vector<int> flowerbed(n);
    for (int i = 0; i < n; i++) {
        cout << "Flowerbed " << i + 1 << "status: ";
        cin >> flowerbed[i];
    }

    int wannaPlace;
    cout << "The number of flowers want to be placed: ";
    cin >> wannaPlace;

    Solution s;
    cout << "Result: " << s.canPlaceFlowers(flowerbed, wannaPlace);

    return 0;
}