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
    TreeNode * bt(vector<int> &num, int l, int r)
    {
        if (l>r) return NULL;
        int mid = (l+r) >> 1;
        TreeNode *current= new TreeNode(num[mid]);
        t->left = bt(num, l, mid-1);
        t->right = bt(num, mid+1, r);
        return t;
    }

    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int s=nums.size();
        if (s==0) return NULL;
        return bt(nums, 0, s-1);
    }
};