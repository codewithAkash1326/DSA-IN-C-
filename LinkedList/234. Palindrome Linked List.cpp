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
    ListNode* reverse(ListNode* NewList){

        ListNode* temp = NewList;
        ListNode* prev = NULL;

        while(temp!=NULL){
            ListNode* newnode = temp->next;
            temp->next = prev;
            prev = temp;

            temp = newnode;
        }

        return prev;


    }
    bool isPalindrome(ListNode* head) {
        if(head->next ==NULL) return true;
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast->next!=NULL){
            fast = fast->next;

            if(fast->next !=NULL){
                fast = fast->next;
                slow = slow->next;
            }
        }

         
        ListNode* NewList = slow->next;
        slow->next = NULL;

        ListNode* reverseList = reverse(NewList);

        ListNode* temp = head;

        while(head!=NULL){
            if(head->val != reverseList->val){
                return false;
            }

            else{
                head=head->next;
                reverseList = reverseList->next;
            }
        }

        return true;


    }
};
