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
public:
    vector<int> rviewre(TreeNode* root,int level,vector<int>&ans){
        if(!root)return ans;
        if(level==ans.size())ans.push_back(root->val);
        rviewre(root->right, level+1,ans);
        rviewre(root->left, level+1,ans);
        return ans;
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int>ans;
        int level=0;
      return  rviewre(root, level,ans);
    }
};