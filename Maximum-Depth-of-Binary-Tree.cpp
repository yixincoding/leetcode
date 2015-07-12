/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    void dfs(TreeNode *x, int cur, int &max)
    {
        if (x==NULL)
        {
            if (cur-1 > max) max=cur-1;
            return;
        }
        dfs(x->left, cur+1, max);
        dfs(x->right, cur+1, max);
    }

    int maxDepth(TreeNode* root) {
        if (root == NULL) return 0;
        int res = 1;
        dfs(root, 1, res);
        return res;
    }
};