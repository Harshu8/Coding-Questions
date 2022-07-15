// Leetcode: 203. Remove Linked List Elements
// link: https://leetcode.com/problems/remove-linked-list-elements/


class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* curr = head;
        ListNode* prev = head;
        while( curr != NULL )
        {
            if( head -> val == val )
            {
                head = head -> next;
                // cout<<"Head"<<endl;
            }
            else if( curr -> val == val )
            {
                prev -> next = curr -> next;
                // cout<<"else if"<<endl;
            }
            else if( curr -> val != val )
            {                
                prev = curr;
            }
            
            curr = curr -> next;
        }
        return head;
    }
};
