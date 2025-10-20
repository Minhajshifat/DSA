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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head->next==NULL)

        {
            return NULL;
        }
        ListNode*tmp=head;
        int sz=0;
        while(tmp)
        {
            sz++;
            tmp=tmp->next;
        }
        if(sz-n==0)
        {
           return head->next;
        }
        tmp=head;
        int cnt=0;
        while(cnt<(sz-n)-1&&tmp->next!=NULL)
        {
            tmp=tmp->next;
            cnt++;
        }
        if(tmp->next->next==NULL){
            tmp->next=NULL;
        }else{
            tmp->next=tmp->next->next;
        }
        
        //remove(tar);
        return head;
    }
};