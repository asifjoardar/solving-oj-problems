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
    ListNode* mergeTwoLists(ListNode* a, ListNode* b) {
        
        ListNode temp(INT_MIN);
        ListNode *ans = &temp;
        
        while(a && b){
            if(a->val < b->val){
                ans->next=a;
                a=a->next;
            }
            else{
                ans->next=b;
                b=b->next;
            }
            ans=ans->next;
        }
        if(a){
            ans->next=a;
        }
        else{
            ans->next=b;
        }
        return temp.next;
    }
};
