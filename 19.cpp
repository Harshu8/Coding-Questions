// Leetcode: 61. Rotate List
// link: https://leetcode.com/problems/rotate-list/


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
    ListNode* rotateRight(ListNode* head, int k) {
        if( head == NULL )
        {
            return head;
        }
        int length = getLength(head);
        k = k % length;
        while( k-- )
        {
            ListNode* end = head;
            ListNode* prev = head;
            
            while( end -> next != NULL )
            {
                prev = end;
                end = end -> next;
            }
            end -> next = head;
            prev -> next = NULL;
            head = end;
        }
        
        // cout<<"end: "<<end->val<<endl;
        // cout<<"Kend: "<<kend->val<<endl;
        return head;
    }
};
