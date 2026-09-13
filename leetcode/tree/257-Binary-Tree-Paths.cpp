/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
   void preorder(TreeNode* root, string&s, vector<string>& result) {
     if(root==NULL)return;
     int len = s.length();
       s+=to_string(root->val);
       if (root->left == NULL && root->right == NULL) {
            result.push_back(s);}
      else{
        s+="->";
       
        preorder(root->left,s,result);
        preorder(root->right,s,result);
      }
      s.erase(len);
    }
public:
    vector<string> binaryTreePaths(TreeNode* root) {
       vector<string> result;
       string s = "";
       preorder(root, s, result); 
        
        return result;
    }
};