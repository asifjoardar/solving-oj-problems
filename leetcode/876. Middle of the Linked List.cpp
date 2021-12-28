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
    ListNode* middleNode(ListNode* head) {
        int count1=1,count2=0;
        ListNode* dummy=head;
        while(dummy->next!=NULL){
            dummy=dummy->next;
            count1++;
        }
        count1=count1/2;
        while(count2<count1){
            count2++;
            head=head->next;
        }
        return head;
    }
};
