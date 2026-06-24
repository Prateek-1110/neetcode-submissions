/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
   public:
    ListNode* mergeTwoLists(ListNode* a, ListNode* b) {
        if (!a) return b;
        if (!b) return a;
        ListNode* curr = new ListNode(0);
        ListNode* dummy = curr;
        while (a != nullptr && b != nullptr) {
            if (a->val > b->val) {
                curr->next = new ListNode(b->val);
                b = b->next;
            } else {
                curr->next = new ListNode(a->val);
                a = a->next;
            }
            curr = curr->next;
        }
        while (a != nullptr) {
            curr->next = new ListNode(a->val);
            a = a->next;
            curr = curr->next;
        }
        while (b != nullptr) {
            curr->next = new ListNode(b->val);
            b = b->next;
            curr = curr->next;
        }
        return dummy->next;
    }
};
