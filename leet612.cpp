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
       int sum = 0;
        int carry = 0;
        ListNode* dummy = new ListNode(0);
        ListNode* curr = dummy;
        while(l1 || l2)
        {
            int x = (l1 !=NULL) ? l1->val : 0;
            int y = (l2 != NULL) ? l2->val : 0;
            sum = carry + x + y;
            carry = sum/10;
            curr->next = new ListNode(sum % 10);
            curr = curr->next;
            l1 = (l1 != NULL) ? l1->next : l1;
            l2 = (l2 != NULL) ? l2->next : l2;
        }
        if (carry > 0){
            curr->next = new ListNode(carry);
        }
        return dummy->next;
        }
};