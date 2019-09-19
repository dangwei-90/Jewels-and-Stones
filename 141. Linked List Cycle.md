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
    bool hasCycle(ListNode *head) {
        // 采用快指针+慢指针的方式
        ListNode* lfast = head;
        ListNode* lLow = head;
        while(lfast != nullptr && lLow != nullptr && lfast->next != nullptr)
        {
            lLow = lLow->next;
            lfast = lfast->next->next;
            if(lLow == lfast)
            {
                return true;
            }
        }
        
        return false;
    }
};
