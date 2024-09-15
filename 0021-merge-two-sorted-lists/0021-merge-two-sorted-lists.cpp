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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* dummy = new ListNode();
        ListNode* ans = dummy;
        
        ListNode* list1k = list1;
        ListNode* list2k = list2;
        
        while(list1k != nullptr && list2k != nullptr){
            if(list1k->val <= list2k->val){
                ans->next = list1k;
                list1k = list1k->next; 
            }else{
                ans->next = list2k;
                list2k = list2k->next; 
            }
            ans = ans->next;
        }
        if(list1k != nullptr) ans->next = list1k;
        if(list2k != nullptr) ans->next = list2k;
        
        return dummy->next;
    }
};