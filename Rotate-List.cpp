#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};


// ListNode* rotateRight(ListNode* head, int k){
//     if (head==NULL || k==0) return head;
//     ListNode* p=head;
//     int len=0;
//     while (p->next){
//         len++;p=p->next;
//     }
//     len++;p->next=head;
//     p=head;
//     for (int i=1;i<len-k%len;i++)
//     {
//         p=p->next;
//     }
//     ListNode *tmp=p;p=p->next;tmp->next=NULL; 
//     return p;
// }

// ListNode* rotateRight(ListNode* head, int k) {
//     if (head==NULL) return head;
//     int len=0; 
//     ListNode* p=head;
//     while (p) {len++;p=p->next;}
//     k %= len;
//     if (k==0 || len==1) return head;
//     p=head;
//     for(int i=0;i<len-k;i++) p=p->next;
//     ListNode *q=p;
//     while (q!=NULL)
//     {
//         if (q->next == NULL) q->next=head;
//         if (q->next == p) q->next=NULL; 
//         q=q->next;
//     }
//     return p;
// }

int main()
{
	ListNode *a=new ListNode(1);
	ListNode *b=new ListNode(2);
	a->next=b;
	a=rotateRight(a,1);
	cout <<a->val<<' '<<a->next->val<<endl;
	return 0;
}