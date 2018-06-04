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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
    {
        ListNode* listret = new ListNode(0);
        ListNode* listtemp = new ListNode(0);
        listtemp->val = (l1->val + l2->val)%10;
        listret = listtemp;
        int nCount = (l1->val + l2->val)/10;
        l1 = l1->next;
        l2 = l2->next;
        
        while((l1 != nullptr) || (l2 != nullptr))
        {
            if(l1 != nullptr)
            {
                nCount = nCount + l1->val;
                l1 = l1->next;
            }
            if(l2 != nullptr)
            {
                nCount = nCount + l2->val;
                l2 = l2->next;
            }
            
            ListNode* Temp = new ListNode(0);
            
            if(Temp != nullptr)
            {
                Temp->val = (nCount%10);
                listtemp->next = Temp;
                listtemp = listtemp->next;
            }
            nCount = nCount/10;
        }
        
        if(nCount > 0)
        {
            ListNode* Temp = new ListNode(0);
            
            if(Temp != nullptr)
            {
                Temp->val = (nCount%10);
                listtemp->next = Temp;
                listtemp = listtemp->next;
            }
        }
        
        return listret;
    }
};
