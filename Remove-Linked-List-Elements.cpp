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
    /* 32ms */
    ListNode* removeElements(ListNode* head, int val){
        ListNode *pseudo_head = new ListNode(0);
        pseudo_head->next = head;
        ListNode *cur = pseudo_head;
        while(cur){
            if(cur->next && cur->next->val == val)   cur->next = cur->next->next;
            else    cur = cur->next;
        }
        return pseudo_head->next;
    }
    /* 36ms */
    // ListNode* removeElements(ListNode* head, int val) {
    //     if (head==NULL) return head;
    //     while (head && head->val == val) head=head->next;
    //     if (head == NULL) return head;
    //     ListNode *p=head;
    //     while (p->next)
    //     {
    //         if (p->next->val == val) p->next=p->next->next;
    //         else
    //         {
    //             p=p->next;
    //         }
    //     }
    //     return head;
    // }
};