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
    TreeNode *res;
    int contains(TreeNode *x, TreeNode *p, TreeNode *q, TreeNode *root)
    {
        //if (res!=root) return 2;
        if (x==NULL) return 0;
        int t=contains(x->left,p,q,root)+contains(x->right,p,q,root);
        if (x==p || x==q) t++;
        if (t==2 && res==root) res=x;
        return t;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (root == NULL || root==p || root==q) return root;
        res=root;
        int t=contains(root->left,p,q,root)+contains(root->right,p,q,root);
        return res;
    }
};