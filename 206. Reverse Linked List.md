/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head == nullptr || head->next == nullptr)
        {
            return head;
        }
        
        ListNode * first = nullptr;
        ListNode * second = head;
        ListNode * third = nullptr;
        
        while(second != nullptr)
        {
            third = second->next;
            second->next = first;
            first = second;
            second = third;
        }
        
        return first;
    }
};
