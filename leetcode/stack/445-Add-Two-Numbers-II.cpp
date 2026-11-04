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
        stack<int>s1;
        stack<int>s2;
        ListNode* temp=l1;
        while(temp!=NULL){
            s1.push(temp->val);
            temp=temp->next;
        }

          temp=l2;
        while(temp!=NULL){
            s2.push(temp->val);
            temp=temp->next;
        }
         
        stack<int>s3;
        int carry=0;
        while(!s1.empty() && !s2.empty()){
           int x=s1.top()+s2.top()+carry;
           s3.push(x%10);
           carry=x/10;
           s1.pop();
           s2.pop();
        }
         while(!s1.empty()){
           int x=s1.top()+carry;
           s3.push(x%10);
           carry=x/10;
           s1.pop();
         }

          while( !s2.empty()){
           int x=s2.top()+carry;
           s3.push(x%10);
           carry=x/10;
           s2.pop();
        }
        while(carry){
         int x=carry;
           s3.push(x%10);
           carry=x/10;
           
        }

        ListNode* temp1=NULL;
        ListNode* temphead;
        while(!s3.empty()){
            if(temp1==NULL){
                temp1= new ListNode(s3.top());
                temphead=temp1;
                s3.pop();
            }
            else{
                temp1->next = new ListNode(s3.top());
                temp1=temp1->next;
                 s3.pop();
            }
        }
      return temphead;

    }
};