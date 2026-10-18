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
    ListNode* reverseList(ListNode* head) {
         ListNode* temp;
         temp=head;
         int size=0;
             while(temp!=NULL){
                size++;
               temp=temp->next;
        }
         temp=head;
         int k=size;
      for(int i=0;i<size-1;i++){
             for(int j=0;j<size-i-1;j++){
              swap(temp->val,(temp->next)->val);
              temp=temp->next;
        }
        temp=head;
      }
      return head;
    }
};