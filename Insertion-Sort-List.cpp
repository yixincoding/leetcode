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
    ListNode* insertionSortList(ListNode* head) {
        if (head==NULL) return head;
        ListNode *phead=new ListNode (0);
        phead->next = new ListNode (head->val);
        ListNode *p=phead->next, *cur=head->next;
        while (cur)
        {
            if (phead->next->val > cur->val) 
            {
                ListNode *tmp=phead->next;
                phead->next=cur;
                cur=cur->next;
                phead->next->next=tmp;
            }
            else
            {
                while (cur->val > p->val && p->next) p=p->next;
                if (p->next==NULL)
                {
                    p->next=cur;
                    cur=cur->next;
                    p->next->next=NULL;
                }
                else
                {
                    ListNode *tmp = p->next;
                    p->next=cur;
                    cur=cur->next;
                    p->next->next=tmp;
                }
            }
            p=phead->next;
        }
        return phead->next;
    }
};