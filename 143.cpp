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
    void reorderList(ListNode* head) {
        if(!head||!head->next||!head->next->next) return;
        ListNode* first=head;
        ListNode* second=first->next;
        ListNode* lastButOne=getLastButOne(first);
        first->next=getLast(first);
        first->next->next=second;
        lastButOne->next=NULL;
        reorderList(second);
        
    }
    ListNode* getLast(ListNode* head)
    {
        ListNode* res=head;
        while(res->next)
        {
            res=res->next;
        }
        return res;
    }
    ListNode* getLastButOne(ListNode* head)
    {
        ListNode* res=head;
        while(res->next->next)
        {
            res=res->next;
        }
        return res;
    }
};