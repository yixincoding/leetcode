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
    int dep(TreeNode *p)
    {
        if (p==NULL) return 0;
        int x=dep(p->left), y=(dep(p->right));
        if (x==-1 || y==-1 || abs(x-y) > 1) return -1;
        else return max(x,y)+1;
    }

    bool isBalanced(TreeNode* root) {
        if (root==NULL) return true;
        int x=dep(root->left), y=dep(root->right);
        if (x==-1 || y==-1) return false;
        if (abs(x-y) < 2) return true;else return false; 
    }
};