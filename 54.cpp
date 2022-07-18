// Leetcode: 92. Reverse Linked List II
// link: https://leetcode.com/problems/reverse-linked-list-ii/


class Solution {
public:
    
    ListNode* reverse( ListNode* head )
    {
        
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* forward = NULL;
        while( curr )
        {
            forward = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = forward;
        }
        return prev;
    }
    
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        
        if( head == NULL || head->next == NULL )
        {
            return head;
        }
        
        ListNode* dummy = new ListNode(-1);
        dummy -> next = head;
        
        ListNode* it = dummy;
        ListNode* pre_it = NULL;
        
        for( int i=0;i<left;i++ )
        {
            pre_it = it;
            it = it -> next;
        }
        
        ListNode* curr = it;
        ListNode* prev = pre_it;
        
         //reverse 
        for(int i = left; i <= right; i++){
            ListNode* forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
        }
        
        pre_it -> next = prev;
        it->next = curr;
        return dummy->next;
    }
};
