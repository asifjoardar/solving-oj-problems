class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        
        if(!head)
            return head;
        
        ListNode *o=head, *ehead=head->next, *e = ehead;
        
        while(e && e->next)
        {
            o->next = o->next->next;
            e->next = e->next->next;
            o = o->next;
            e = e->next;
        }
        
        o->next = ehead;
        
        return head;
    }
};
