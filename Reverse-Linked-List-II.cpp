/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        if (head==NULL || m==n) return head;
        ListNode* nh=new ListNode (0);
        nh->next = head;
        ListNode *q=nh;
        for (int i=0;i<m-1;i++) q=q->next;
        ListNode *begin=q, *end=q->next, *p=q->next;
        q=p->next;
        ListNode *tmp;
        for (int i=m;i<n;i++)
        {
            tmp=q->next;
            q->next=p;
            p=q;
            q=tmp;
        }
        begin->next=p;
        end->next=tmp;
        return nh->next;
    }
};