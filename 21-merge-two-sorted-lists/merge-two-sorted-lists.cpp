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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==NULL&&list2==NULL)
        {
            return NULL;
        }else if(list1==NULL)
        {
            return list2;
        }else if(list2==NULL)
        {
            return list1;
        }
        ListNode*res;
        if(list1->val<=list2->val)
            {
                 res=list1;
                list1=list1->next;
            }else{
                res=list2;
                list2=list2->next;
            }
            ListNode*Head=res;
        while(list1&&list2)
        {
            if(list1->val<list2->val)
            {
                res->next=list1;
                list1=list1->next;
            }else{
                res->next=list2;
                list2=list2->next;
            }
            res=res->next;
            
        }
        while(list1)
        {
            res->next=list1;
            res=res->next;
            list1=list1->next;
        }
        while(list2)
        {
            res->next=list2;
            res=res->next;
            list2=list2->next;
        }
        return Head;
    }
};