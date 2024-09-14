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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int size = 0;
        ListNode* temp = head;
        while(temp != nullptr){
            size++;
            temp = temp->next;
        }
        
        if (size == n) {
            ListNode* toDelete = head;
            head = head->next;  
            delete toDelete; 
            return head;  
        }
        
        int to = 0;
        int toto = size-n;
        temp = head;
        while(toto-to != 0){
            if(toto-to == 1){
                ListNode*jj = temp->next;
                temp->next = jj->next;
                delete(jj);
            }
            temp = temp->next;
            to++;
        }
        return head;
    }
};