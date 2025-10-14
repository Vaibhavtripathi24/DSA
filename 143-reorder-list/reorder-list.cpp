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
ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* Next = head;
        
        while (curr) {
            Next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = Next;
             }
              return prev;
        
    }
    void reorderList(ListNode* head) {
        
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* b = reverseList(slow->next);
        ListNode* a = head;
        slow->next = NULL;
        ListNode* c = new ListNode(100);
        ListNode* tempC = c;
        ListNode* tempA = a;
        ListNode* tempB = b;
        while(tempA!=NULL && tempB!=NULL){
            tempC->next = tempA;
            tempC = tempC->next;
            tempA= tempA->next;

            tempC->next = tempB;
            tempC = tempC->next;
            tempB = tempB->next;
        }
        tempC->next = tempA;
        head = c->next;
    }
};