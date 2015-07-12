/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    void dfs(TreeNode *x, int cur, int &min)
    {
        if (x==NULL) return;
        if (x->left==NULL && x->right==NULL)
        {
            if (cur < min) min=cur;
            return;
        }
        dfs(x->left, cur+1, min);
        dfs(x->right, cur+1, min);
    }

    int minDepth(TreeNode *root) {
        if (root == NULL) return 0;
        int res = INT_MAX;
        dfs(root, 1, res);
        return res;
    }
};