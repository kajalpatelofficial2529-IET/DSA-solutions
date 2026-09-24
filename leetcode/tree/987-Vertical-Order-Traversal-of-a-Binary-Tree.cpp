class Solution {
public:
    void find(TreeNode* root, int pos, int &l, int &r) {
        if (!root) return;
        l = min(l, pos);
        r = max(r, pos);
        find(root->left, pos - 1, l, r);
        find(root->right, pos + 1, l, r);
    }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        int l = 0;
        int r = 0;
        find(root, 0, l, r);
        map<int, map<int, vector<int>>> mp;
        queue<TreeNode*> q;
        queue<int> index;
        queue<int> level;
        q.push(root);
        index.push(0);
        level.push(0);
        while (!q.empty()) {

            TreeNode* temp = q.front();
            q.pop();

            int pos = index.front();
            index.pop();

            int row = level.front();
            level.pop();

            mp[pos][row].push_back(temp->val);

            if (temp->left) {
                q.push(temp->left);
                index.push(pos - 1);
                level.push(row + 1);
            }

            if (temp->right) {
                q.push(temp->right);
                index.push(pos + 1);
                level.push(row + 1);
            }
        }

        vector<vector<int>> ans(r - l + 1);

        for (auto &col : mp) {
            int position = col.first;
            for (auto &row : col.second) {
                sort(row.second.begin(), row.second.end());

                for (int value : row.second) {
                    ans[position - l].push_back(value);
                }
            }
        }

        return ans;
    }
};