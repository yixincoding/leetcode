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
    ListNode *half;
    
    bool isP(ListNode *s, ListNode *f)
    {
        if (f==NULL) {half=s;return true;}
        if (f->next== NULL) {half=s->next;return true;}
        if (isP(s->next, f->next->next) && s->val==half->val){
            half = half->next;
            return true;
        }
        return false;
    }
    
    bool isPalindrome(ListNode* head) {
        return isP(head,head);
    }
};