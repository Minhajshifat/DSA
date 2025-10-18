/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode*slow=head;
        ListNode*fast=head;
        while(fast->next!=NULL&&fast->next->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)
            {
                break;
            }
        }
        if(fast!=NULL)
        {
            slow=slow->next;
        }
        ListNode*prev=NULL,*tmp;
        while(slow)
        {
            tmp=slow->next;
            slow->next=prev;
            prev=slow;
            slow=tmp;
        }
        
        fast=head,slow=prev;
        while(slow)
        {
            if(slow->val!=fast->val)
            {
                return false;
            }
            slow=slow->next;
            fast=fast->next;
        }
    return true;
    }
};