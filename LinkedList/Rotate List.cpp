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
    ListNode* rotateRight(ListNode* head, int k) {

        if(head == NULL||head->next == NULL) return head;
    //      for(int i=0;i<k;i++) {
    //     ListNode* temp = head;
    //     while(temp->next->next != NULL) temp = temp->next;
    //     ListNode* end = temp->next;
    //     temp->next = NULL;
    //     end->next = head;
    //     head = end;
    // }
    // return head;

      int length =1;
      ListNode* temp =head;
      while(temp->next != NULL){
          temp = temp->next;
          length++;
      }
     temp->next=head;

    k = k%length; //when k is more than length of list
    int end = length-k; //to get end of the list

    while(end--){
        temp = temp->next;
    }
    head = temp->next;
    temp->next =NULL;

return head;

}
};
