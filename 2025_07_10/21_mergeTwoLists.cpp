#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
};

class Solution {
public: 
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2) {
        if (list1 == NULL) return list2;
        else if (list2 == NULL) return list1;
        else {
            //Tìm node bắt đầu
            ListNode *head;
            if (list1->val > list2->val) {
                head = list2;
                list2 = list2->next;
            } else {
                head = list1;
                list1 = list1->next;
            }

            ListNode *cur = head;
            while (list1 and list2) {
                if (list1->val > list2->val) {
                    cur->next = list2;
                    list2 = list2->next;
                } else {
                    cur->next = list1;
                    list1 = list1->next;
                }
                cur = cur->next;
            }

            if (not list1) {
                cur->next = list2;
            } else cur->next = list1;
            return head;
        }
    }
};