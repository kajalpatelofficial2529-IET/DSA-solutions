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
        
     ListNode*temp;
         temp=head;
         int size=0;
             while(temp!=NULL){
                size++;
               temp=temp->next;
             }

             if(n==size){
                return head->next;
             }
        int target=size-n-1;
         temp=head;
         int count=0;
           while(count<target){
               temp=temp->next;
               count++;
        }
         ListNode*temp1;
         temp1=temp->next;
         temp->next=temp1->next;
         return head;
    }
};