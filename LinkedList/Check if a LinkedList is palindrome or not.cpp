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
 ListNode* reverse(ListNode* head){
  
  ListNode* curr=NULL, *prev=NULL;

  while (head) {
            curr = head;
            head = head->next;
            curr->next = prev;
            prev = curr;
  }
  return prev;
 }
    bool isPalindrome(ListNode* head) {
        
        if(head == NULL || head->next == NULL)return true;

        //find middle node

        ListNode*fast = head;
        ListNode*slow = head;

        while(fast->next && fast->next->next){
           slow = slow->next;
           fast = fast->next->next;
        }

        //reverse the right side after mid point

        slow->next = reverse(slow->next);
        slow= slow->next;

        while(slow){
            if(slow->val != head->val)return false;
            slow= slow->next;
            head= head->next;
        }
        return true;
    }
};
