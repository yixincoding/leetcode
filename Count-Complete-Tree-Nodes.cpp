#include <iostream>
#include <cmath>
using namespace std;

struct TreeNode
{
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x): val(x), left(NULL), right(NULL) {}
};

int countNodes(TreeNode* root) {
    if (root == NULL) return 0;
    TreeNode *p=root;
    int dep=0;
    while (p)
    {
        p=p->left;
        dep++;
    }
    dep--;
    if (dep==0) return 1;
    int low=0, high = pow(2,dep)-1;
    while (low < high)
    {
        int mid=(low + high) >> 1;
        p=root;
        for (int i=0;i<dep;i++)
        {
            if ( ((mid>>(dep-i-1)) & 1) == 0) p=p->left;
            else p=p->right;
        }
        if (p!=NULL) low=mid+1;
        else
            high = mid-1;
    }
    p=root;
    for (int i=0;i<dep;i++)
    {
        if (  (low>>(dep-i-1) & 1) ==0) p=p->left;
        else p=p->right;
    }
    if (p==NULL) return low+pow(2,dep)-1;else return low+pow(2,dep);
}

int main(int argc, char const *argv[])
{
	TreeNode *a=new TreeNode(1);
	TreeNode *b=new TreeNode(2);
	TreeNode *c=new TreeNode(3);
	TreeNode *d=new TreeNode(4);
	a->left=b;a->right=c;b->left=d;
	cout << countNodes(a)<<endl;
	return 0;
}