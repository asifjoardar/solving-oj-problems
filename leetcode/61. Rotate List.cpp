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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head)
            return 0;
        
        int i, count=0;
        
        ListNode *ans, *dummy;
        dummy=head;
        
        while(dummy){
            dummy=dummy->next;
            count++;
        }
        
        if(k%count==0)
            return head;
        
        dummy=head;
        for(i=0;i<count-(k%count);i++){
            dummy=dummy->next;
        }
        ans=dummy;
        while(dummy->next){
            dummy=dummy->next;
        }
        dummy->next=head;
        
        for(i=0;i<count-(k%count);i++){
            dummy=dummy->next;
        }
        dummy->next=NULL;
        
        return ans;
        
    }
};
