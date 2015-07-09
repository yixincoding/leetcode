#include <iostream>
#include <string>
#include <cstring>
using namespace std;


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
 

    TreeNode* invert(TreeNode* p)
    {
        if (p == NULL) return NULL;
        if (p->left==NULL && p->right==NULL) return p;
        p->left=invert(p->left);
        p->right=invert(p->right);
        TreeNode* tmp=p->right;
        p->right=p->left;
        p->left=tmp;
        return p;
    }

    TreeNode* invertTree(TreeNode* root) {
        if (root == NULL) return NULL;
        root = invert(root);
        return root;
    }
int main()
{
	TreeNode* a=new TreeNode(4);
	TreeNode* b=new TreeNode(2);
	TreeNode* c=new TreeNode(7);
	TreeNode* d=new TreeNode(1);
	TreeNode* e=new TreeNode(3);
	TreeNode* f=new TreeNode(6);
	TreeNode* g=new TreeNode(9);
	a->left=b;a->right=c;
	b->left=d;b->right=e;
	c->left=f;c->right=g;
	a=invertTree(a);
	cout << a->val<<' '<<a->left->val<<endl;
}