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
        ListNode *nh = new ListNode(0);
        nh -> next = head;
        ListNode *pre=nh, *cur=head;
        while (cur)
        {
            if (cur->next && cur->next->val < cur->val)
            {
                while (pre->next && pre->next->val < cur->next->val) pre=pre->next;
                ListNode *tmp=pre->next;
                pre->next=cur->next;
                cur->next=cur->next->next;
                pre->next->next=tmp;
                pre=nh;
            }
            else
                cur = cur->next;
        }
        return nh->next;
    }
};