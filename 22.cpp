// Leetcode: 234. Palindrome Linked List 
// link: https://leetcode.com/problems/palindrome-linked-list/


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
    
    bool isPalindrome(ListNode* head) {
        vector<int> v;
        ListNode* temp = head;
        int length = getLength(head);
        // cout<<length<<endl;
        int tempLength = length/2;
        while( tempLength-- )
        {
            v.push_back( temp -> val );
            // cout<<temp->val<<" ";
            temp = temp -> next;
        }
        if( length % 2 != 0 )
        {
            temp = temp -> next;
        }
        int vSize = v.size();
        int i=0;
        while( temp != NULL )
        {
            if( v[vSize-1-i] != temp->val )
            {
                return false;
            }
            temp = temp -> next;
            i++;
        }
        return true;      
    }
};
