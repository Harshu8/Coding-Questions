// Leetcode: 24. Swap Nodes in Pairs
// link: https://leetcode.com/problems/swap-nodes-in-pairs/

class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        
         if( head == NULL || head -> next == NULL ) 
        {
            return head;
        }
            
        ListNode* temp; 
        temp = head->next;
        
        head->next = swapPairs( head->next->next ); 
        temp->next = head; 
        
        return temp; 
    }
};
