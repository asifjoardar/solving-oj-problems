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
    ListNode* insertionSortList(ListNode* head) {
        ListNode* nh = NULL;
        while(head){
            ListNode* temp = head;
            head = head->next;
            temp->next=NULL;
            
            if(nh == NULL)
                nh = temp;
            else if(nh->val >= temp->val){
                temp->next = nh;
                nh = temp;
            }
            else{
                ListNode* root = nh;
                {
                while(root->next){
                    if(temp->val > root->val and temp->val <= root->next->val){
                        temp->next = root->next;
                        root->next = temp;
                        break;
                    }
                    root = root->next;
                }
                    if(root->next==NULL) root->next = temp;
                    
                }
            }
        }
        return nh;
    }
};
