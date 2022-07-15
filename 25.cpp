// Leetcode: 21. Merge Two Sorted Lists
// link: https://leetcode.com/problems/merge-two-sorted-lists/


class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        vector<int> v1;
        vector<int> v2;
        ListNode* temp = list1;
        while( temp != NULL )
        {
            v1.push_back(temp->val);
            temp = temp -> next;
        }
        temp = list2;
        while( temp != NULL )
        {
            v2.push_back(temp->val);
            temp = temp -> next;
        }
        int i=0,j=0,k=0;
        ListNode* ans = new ListNode();
        temp = ans;
        while( i < v1.size() && j < v2.size() )
        {
            if( v1[i] <= v2[j] )
            {
                ListNode* newNode = new ListNode(v1[i]);
                temp -> next = newNode;
                temp = newNode;          
                i++;
            }
            else
            {
                ListNode* newNode = new ListNode(v2[j]);
                temp -> next = newNode;
                temp = newNode;                
                j++;
            }
        }
        while( i < v1.size() )
        {
            ListNode* newNode = new ListNode(v1[i]);
            temp -> next = newNode;
            temp = newNode;    
            i++;
        }
        while( j < v2.size() )
        {
            ListNode* newNode = new ListNode(v2[j]);
            temp -> next = newNode;
            temp = newNode;    
            j++;
        }
        ans = ans->next;
        return ans;
    }
};
