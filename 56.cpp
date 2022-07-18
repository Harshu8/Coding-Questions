// Leetcode: 445. Add Two Numbers II
// link: https://leetcode.com/problems/add-two-numbers-ii/


class Solution {
public:
    ListNode* reverse( ListNode* temp )
    {
        ListNode* prev = NULL;
        ListNode* curr = temp;
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
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        l1 = reverse(l1);
        l2 = reverse(l2);
        
        int carry = 0;
        int sum =0;
        
        ListNode* temp1 = l1;
        ListNode* temp2 = l2;
        ListNode* ans = new ListNode(0);
        ListNode* tempAns = ans;
        
        while( temp1 && temp2 )
        {
            int sum = temp1 -> val + temp2 -> val + carry;
            carry = sum / 10;
            sum = sum % 10;
            ListNode* newNode = new ListNode( sum );
            tempAns -> next = newNode;
            tempAns = newNode;
            temp1 = temp1 -> next;
            temp2 = temp2 -> next;
        }
        
        while( temp1 )
        {
            int sum = temp1 -> val + carry;
            carry = sum / 10;
            sum = sum % 10;
            ListNode* newNode = new ListNode( sum );
            tempAns -> next = newNode;
            tempAns = newNode;
            temp1 = temp1 -> next;
        }
        
        while( temp2 )
        {
            int sum = temp2 -> val + carry;
            carry = sum / 10;
            sum = sum % 10;
            ListNode* newNode = new ListNode( sum );
            tempAns -> next = newNode;
            tempAns = newNode;
            temp2 = temp2 -> next;
        }
        if( carry )
        {
            ListNode* newNode = new ListNode(1);
            tempAns -> next = newNode;
            tempAns = newNode;
        }

        ans = reverse( ans -> next );
        return ans;
        
    }
};

