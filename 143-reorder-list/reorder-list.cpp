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
    void reorderList(ListNode* head) {
       
        ListNode*slow=head;
        ListNode*fast=head;
        while(fast->next!=NULL&&fast->next->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        
        ListNode*second=slow->next;
        ListNode*rev=slow->next=NULL;
        while(second)
        {   
            ListNode*d=second->next;
            second->next=rev;
            rev=second;
            second=d;
        }
        fast=head;
        slow=rev;
        
        while(slow)
        {    
            ListNode*tmp1,*tmp2;
            tmp1=fast->next;
            tmp2=slow->next;
            fast->next=slow;
            slow->next=tmp1;
            fast=tmp1;
            slow=tmp2;
        }

    }
};