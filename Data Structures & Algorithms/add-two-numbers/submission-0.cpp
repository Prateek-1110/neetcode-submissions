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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
          ListNode* dum = new ListNode(0);
    ListNode* temp = dum;
    int sum =0, carry = 0;
    while(l1!=nullptr &&  l2!=nullptr){
        sum = l1->val+l2->val+carry;
        carry = sum/10;
        dum->next = new ListNode(sum%10);
        dum = dum->next;
        l1 = l1->next;
        l2 = l2->next;
    }
    while(l1){
        sum = l1->val + carry;
        carry = sum/10;
        dum->next = new ListNode(sum%10);
        dum = dum->next;
        l1 = l1->next;
    }
     while(l2){
        sum = l2->val+carry;
        carry = sum/10;
        dum->next = new ListNode(sum%10);
        dum = dum->next;
        l2= l2->next;
    }
    if(carry) dum->next = new ListNode(carry);
    ListNode* res = temp->next;
    return res;
    }
};
