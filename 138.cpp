/**
 * Definition for singly-linked list with a random pointer.
 * struct RandomListNode {
 *     int label;
 *     RandomListNode *next, *random;
 *     RandomListNode(int x) : label(x), next(NULL), random(NULL) {}
 * };
 */
class Solution {
public:
    unordered_map<RandomListNode *,RandomListNode *>mp;
    RandomListNode *copyRandomList(RandomListNode *head) {
        if(!head) return NULL;
        if(mp[head]) return mp[head];
        
        
        if(!head) return NULL;
        if(mp[head]!=NULL) return mp[head];
        mp[head] = new RandomListNode(head->label);
        mp[head] -> next = copyRandomList(head->next);
        mp[head] -> random = copyRandomList(head->random);
        return mp[head];
    }
};