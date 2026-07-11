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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int s = 1;
        ListNode* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
            s++;
        }
        if (n == s) {
            return head->next;
        }
        s = s - n;
        temp = head;
        while (s - 1) {
            temp = temp->next;
            s--;
        }
        temp->next = temp->next->next;
        return head;
    }
};
