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
    void reorderList(ListNode* head) {
        stack<ListNode*>s;
        int x=0;
        ListNode*temp;
        temp=head;
        while(temp!=NULL){
          temp=temp->next;
          x++;
        }

         temp = head;
        for (int i=0;i<(x+1)/2;i++) {
            temp = temp->next;
        }

        while(temp!=NULL){
            s.push(temp);
            temp=temp->next;
        }
        ListNode*t1=head;
        ListNode*t2;
     
        while(!s.empty()){
           t2=t1->next;
            t1->next=s.top();
            s.pop();
            t1 = t1->next;
            t1->next = t2;
             t1 = t1->next;  
        }
          t1->next = NULL;
    }
};

 