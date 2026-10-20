/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
      unordered_map<ListNode*,int>mp;
      ListNode *a;
      a=headA;
      while(a!=NULL){
         mp[a]=1;
        a=a->next;
      }
     ListNode *b;
        b=headB;
      while(b!=NULL){
       if(mp[b]==1 ) {
        return b;
       }
       else{
        b=b->next;
       }
      }
        return NULL;
    }
};