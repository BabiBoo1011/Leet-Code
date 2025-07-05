#include <iostream>
using namespace std;

class Solution
{
public:
    string mergeAlternately(string word1, string word2)
    {
        int len1 = word1.size();
        int len2 = word2.size();

        string word;
        word.reserve(len1 + len2);
        int i = 0, j = 0;
        while (i < len1 and j < len2)
        {
            word += word1[i++];
            word += word2[j++];
        }

        while (i < len1)
            word += word1[i++];
        while (j < len2)
            word += word2[j++];

        return word;
    }
};

int main()
{
    string word1, word2;
    Solution s;

    cout << "Enter string 1: ";
    cin >> word1;
    cout << "Enter string 2: ";
    cin >> word2;
    cout << "Result: " << s.mergeAlternately(word1, word2);

    return 0;
}