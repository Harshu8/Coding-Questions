// LeetCode - 141. Linked List Cycle
// link: https://leetcode.com/problems/linked-list-cycle/

class Solution {
public:
    bool hasCycle(ListNode *head) {
        if( head == NULL || head -> next == NULL )
        {
            return false;
        }
        ListNode* slow = head; // slow wala pointer ek node chalega ek bar mei.
        ListNode* fast = head-> next; // fast wala pointer do node chalega ek bar mei.
      
        while( slow -> next != NULL && fast -> next != NULL ) // jb tk slow ke next mei NULL nhi aa jata YA fast ke next mei NULL nhi aa jata , tb tk loop chalega.
        {
            fast = fast -> next;
            if( fast -> next != NULL ) // yha hm check krenge ki ab fast ke next mei NULL hai ya nhi , agr NULL nhi hai tbhi hm fast pointer ko aage bda denge.
            {
                fast = fast -> next;
            }
            slow = slow -> next;
            if( slow == fast ) // agar slow pointer fast pointer ke barabar ho jaye to iska mtlb cycle present hai linked list mei.
            {
                return true;
            }
        }
        return false;
    }
};
