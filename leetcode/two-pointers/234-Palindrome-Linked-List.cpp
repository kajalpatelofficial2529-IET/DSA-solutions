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
    bool isPalindrome(ListNode* head) {
        ListNode* temp;
         temp=head;
         int size=0;
             while(temp!=NULL){
                size++;
               temp=temp->next;
        }
        temp=head;
        int n=0;
        while(n<(size/2)){
            temp=temp->next;
            n++; 
        }
        
        ListNode*prev;
        ListNode*curr;
        ListNode*succ;
        prev=NULL;
        curr=temp;
       while(curr!=NULL){
        succ=curr->next;
        curr->next=prev;
        prev=curr;
        curr=succ;
       }
       temp = prev;
        ListNode*start;
        start=head;
       bool c=true;
       while(temp!=NULL){
        if(start->val==temp->val){
            start=start->next;
            temp=temp->next;
        }
        else{
            c=false;
            break;
        }
       }

      return c;
    }
};


   