// Leetcode: 142. Linked List Cycle II
// link: https://leetcode.com/problems/linked-list-cycle-ii/


class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        
        if( !head )
        {
            return NULL;
        }
        bool isCycle = false;
        
        ListNode* slow = head;
        ListNode* fast = head;
        while( fast && fast->next )
        {
            fast = fast -> next -> next;
            slow = slow ->next;
            
            if( fast == slow )
            {
                isCycle = true;
                break;                
            }
        }
        
        if( !isCycle )
        {
            return NULL;
        }
        
        slow = head;
        while( slow != fast )
        {
            slow = slow -> next;
            fast = fast -> next;
        }
        return fast;

    }
};
