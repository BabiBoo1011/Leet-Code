#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
};
//1 1 1 2 2 2 3 3 3 3
class Solution {
public:
    ListNode *deleteDuplicates(ListNode *head) {
        ListNode *cur = head;
        while (cur->next != NULL and cur != NULL) {
            if (cur->val == cur->next->val) {
                ListNode *tmp = cur->next;
                cur->next = cur->next->next;
                delete tmp;
            } else cur = cur->next;
        }
        return head;
    }
};