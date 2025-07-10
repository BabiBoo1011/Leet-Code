#include <iostream>
#include <vector>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
};

class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *cur = head;
        vector<ListNode*> address(10000);
        int n = 0;
        while(cur != NULL) {
            if (cur == NULL) return false;
            int found = 0;
            for (int i = 0; i < n; i++) {
                if (cur == address[i]) {
                    return true;
                }
            }
            if (not found) {
                address[n] = cur;
                n++;
            }
            cur = cur->next;
        }
        return false;
    }
};