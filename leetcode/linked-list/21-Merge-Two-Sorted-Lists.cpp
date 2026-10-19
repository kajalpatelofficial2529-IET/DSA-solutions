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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode*t1;
        ListNode*t2;
        t1=list1;
        t2=list2;
        ListNode*ans= new ListNode(-1);
        ListNode*head;
        head=ans;
        while(t1!=NULL && t2!=NULL){
           if(t1->val<=t2->val){
            ans->next=t1;
            t1=t1->next;
           }
           else{
            ans->next=t2;
            t2=t2->next;
           }
         ans = ans->next;
        }
        while(t1!=NULL){
             ans->next=t1;
            t1=t1->next;
            ans = ans->next;
        }
         while(t2!=NULL){
             ans->next=t2;
            t2=t2->next;
            ans = ans->next;
        }

     return head->next;

    }
};