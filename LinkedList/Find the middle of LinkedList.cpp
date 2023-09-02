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
    ListNode* middleNode(ListNode* head) {
        ListNode* temp=head;
        int count=0,i=0;

        while(temp){
        temp=temp->next;
        count++;
        }
        temp =head;
         int n = count/2;
         while(i<n){
             temp=temp->next;
             i++;
         }
         return temp;
    }
};
