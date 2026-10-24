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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode*slow;
        ListNode*fast;
        ListNode* t3;
        t3=list2;
        while(t3->next!=NULL){
            t3=t3->next;
        }
         int k=b-a+2;
         fast=list1;
         slow=list1;
         while(fast!=NULL && k>0){
          fast=fast->next;
          k--;
         }
         while(a>1 && fast!=NULL){
           slow=slow->next;
           fast=fast->next;
           a--;
         }

         slow->next=list2;
        t3->next=fast;

         return list1;

           }
};