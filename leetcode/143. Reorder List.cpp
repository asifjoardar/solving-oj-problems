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
        if ((!head) || (!head->next) || (!head->next->next))
            return;
        
        stack<ListNode*> myStack;
        ListNode* tempList = head;
        int n=0,i;
        while(tempList != NULL){
            myStack.push(tempList);
            tempList = tempList->next;
            n++;
        }
        ListNode* ansList = head;
        for(i=0;i<n/2;i++){
            ListNode* now = myStack.top();
            myStack.pop();
            now->next = ansList->next;
            ansList->next = now;
            ansList = ansList->next->next;
        }
        ansList->next = NULL;
    }
};
