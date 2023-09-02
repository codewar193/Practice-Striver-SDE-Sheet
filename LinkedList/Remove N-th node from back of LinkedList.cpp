/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        // ListNode* curr =  head;
        // int i =0;

        // if(head->next == NULL && n== 1)return NULL;
        // else if(head->next->next == NULL && n== 1){
        //     head->next= NULL;
        //     return head;
        // }
        // while(i<n){
          
        //   curr =  curr->next;
        //   i++;
        // }
        //  ListNode*temp = curr->next->next;
        //  curr->next = temp;

        //  return head;

        //Using two pointer

       ListNode * start = new ListNode();
        start -> next = head;
        ListNode* fast = start;
        ListNode* slow = start;     

        for(int i = 1; i <= n; ++i)
            fast = fast->next;
    
        while(fast->next != NULL)
        {
            fast = fast->next;
            slow = slow->next;
        }
        
        slow->next = slow->next->next;
        
        return start->next;
    }
};
