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
        ListNode* head=l1;
         ListNode* prev = NULL;
       int carry=0;
      while(l1!=NULL && l2!=NULL){
        int x=l1->val+l2->val+carry;
        int digit;
        if(x>9){
          digit=x%10;
          carry=x/10;
        }
        else{
            digit=x;
          carry=0; 
        }
        l1->val = digit;
        prev = l1; 
        l1=l1->next;
        l2=l2->next;

      }
      while(l1!=NULL){
        int x=l1->val+carry;
         int digit;
        if(x>9){
          digit=x%10;
          carry=x/10;
        }
        else{
            digit=x;
          carry=0; 
        }
        l1->val=digit;
         prev = l1;       
          l1=l1->next;
      }

       while(l2!=NULL){
         prev->next = l2;
        int x=l2->val+carry;
         int digit;
        if(x>9){
          digit=x%10;
          carry=x/10;
        }
        else{
            digit=x;
          carry=0; 
        }
         l2->val = digit;
            prev = l2;
          l2=l2->next;
      }

      while(carry){
        int x=carry;
         int digit;
        if(x>9){
          digit=x%10;
          carry=x/10;
        }
        else{
            digit=x;
          carry=0; 
        }
        prev->next = new ListNode(x);
      }
     return head;
    }
};