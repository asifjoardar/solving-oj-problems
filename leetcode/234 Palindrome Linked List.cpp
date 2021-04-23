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
    bool isPalindrome(ListNode* n) {
        ListNode* cnt = n;
        ListNode* head = n;
        int count=0;
        while(cnt != NULL){
            count++;
            cnt = cnt->next; 
        }
        stack<int>s;
        int i=0;
        while(i<(count/2)){
            s.push(head->val);
            head = head->next;
            i++;
        }
        if(count%2)
            head = head->next;
        while(head != NULL){
            if(head->val != s.top() )
                return false;
            s.pop();
            head = head->next;
        }
        return true;
    }
};
