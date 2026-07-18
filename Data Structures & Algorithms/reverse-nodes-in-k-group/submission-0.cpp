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
    ListNode* reverseList(ListNode* root) {
        if (!root || !root->next) return root;
        ListNode* temp = reverseList(root->next);
        root->next->next = root;
        root->next = nullptr;
        return temp;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp = head;
        int cnt = 1;
        while (temp != nullptr && cnt < k) {
            temp = temp->next;
            cnt++;
        }
        if (!temp) return head;
        ListNode* ans = temp->next;
        temp->next = nullptr;
        ListNode* res = reverseList(head);
        head->next = reverseKGroup(ans, k);
        return res;
    }
};
