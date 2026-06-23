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
ListNode* rev(ListNode* head){
      if(head==nullptr || head->next==nullptr)return head ;
    ListNode* curr = rev(head->next);
    head->next->next = head;
    head->next = nullptr;
    return curr;
}
    ListNode* reverseList(ListNode* head) {
        if(head==nullptr || head->next==nullptr)return head ;
        ListNode* ans = rev(head);
        return ans;
    }
};
