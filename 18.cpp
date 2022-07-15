// Leetcode: 19. Remove Nth Node From End of List
// link: https://leetcode.com/problems/remove-nth-node-from-end-of-list/


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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int length = getLength(head);
        // cout<<"Length: "<<length<<endl;
        int index = length - n + 1;
        // cout<<"index: "<<index<<endl;
        
        if( index == 1 )
        {
            head = head -> next;
            return head;
        }
        
        ListNode* curr = head;
        ListNode* temp = head;
        while( curr  != NULL )
        {
            temp = curr;
            curr = curr -> next;
        }
        
        curr = head;
        ListNode* prev = curr;
        int count=1;
        while (curr != NULL && curr->next != NULL)
        {
            
            // if traget prev node found than
            if (count == index - 1)
            {
                curr->next = curr->next->next;
            }
            curr = curr->next;
            count++;
        }
        return head;
    }
};
