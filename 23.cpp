// Leetcode: 876. Middle of the Linked List
// link: https://leetcode.com/problems/middle-of-the-linked-list/



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
    ListNode* middleNode(ListNode* head) {
        int length = getLength(head);
        int index=-1;
        index = length/2;
        
        int count=0;
        ListNode* temp = head;
        while( count < index )
        {
            temp = temp -> next;
            count++;
        }
        cout<<temp->val<<endl;
        return temp;
    }
};
