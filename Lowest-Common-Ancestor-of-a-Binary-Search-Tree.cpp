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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (root == NULL || p==NULL || q==NULL) return NULL;
        if (p==q) return p;
        TreeNode *res=root;
        if (p->val > q->val) {TreeNode *tmp=p;p=q;q=tmp;}
        while (res->val > q->val || res->val < p->val)
        {
            if (res->val > q->val) res=res->left;
            if (res->val < p->val) res=res->right;
            if (res==NULL) break;
        }
        return res;
    }
};