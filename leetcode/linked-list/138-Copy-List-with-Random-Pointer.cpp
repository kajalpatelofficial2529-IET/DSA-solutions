/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
       unordered_map< Node*,Node*>m;
       Node*curr =head;
       Node*prev=NULL;
       Node*newhead=NULL;

       while(curr){
        Node*temp=new Node(curr->val);
        m[curr]=temp;
        if(newhead==NULL){
            newhead=temp;
            prev=newhead;
        }
        else{
            prev->next=temp;
            prev=prev->next;
        }
        curr=curr->next;
       
       }
     Node * newcurr=newhead;
     curr=head;
     while(curr){
       if(curr->random==NULL){
        newcurr->random=NULL;
       }
       else{
        newcurr->random=m[curr->random];
       }
       curr = curr->next;  
      newcurr = newcurr->next;
     }
    return newhead;

    }
};