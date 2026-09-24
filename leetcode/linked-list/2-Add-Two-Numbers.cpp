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
        ListNode* l3=new ListNode();
        ListNode* head = l3;
        int carry=0;
        while(l1 || l2 || carry){
           int val1 = (l1 == NULL) ? 0 : l1->val;
            int val2 = (l2 == NULL) ? 0 : l2->val;
            int x=val1+val2+carry;
            if(x<=9){
                l3->val=x;
                carry = 0;
            }
            else {
                int digit=x%10;
              l3->val=digit;
              carry=x/10;
            }
           if(l1 != NULL) l1 = l1->next;
            if(l2 != NULL) l2 = l2->next;
            // ager loop phir se chale tabhi create kro new node else useless
           if(l1  || l2  || carry ) {
                l3->next = new ListNode();
                l3 = l3->next;
            }
        }
        return head;
    }
};