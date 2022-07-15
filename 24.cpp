// Leetcode: 2095. Delete the Middle Node of a Linked List
// link: https://leetcode.com/problems/delete-the-middle-node-of-a-linked-list/


class Solution {
public:
    int getLength( ListNode* head )
    {
        ListNode* temp = head;
        int length=0;
        while( temp != NULL )
        {
            temp = temp -> next;
            length++;
        }
        return length;
    }
    
    ListNode* deleteMiddle(ListNode* head) {
        int length = getLength(head);
        
        ListNode* prev = NULL;
        if( length == 1 )
        {
            return prev;
        }
        
        ListNode* curr = head;
        int index = (length/2) + 1;
        int count = 1 ;
        while( count < index && curr != NULL )
        {
            prev = curr;
            curr = curr -> next;
            count++;
        }
        prev -> next = curr -> next;
        // cout<<"prev: "<<prev->val<<endl;
        // cout<<"curr: "<<curr->val<<endl;
        return head;
    }
};
