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
    int length (ListNode* head){
        int count = 0;
        while(head != nullptr){
            count++;
            head = head->next;
        }
        return count;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head == nullptr){
            return head;
        }
        int size = length(head);
        if(size==n){
            return head->next;
        }
        ListNode *curr = head;

        int deleteNode = size-n;
        int count =1;
        while(count!=deleteNode){
            count++;
            curr = curr->next;
        }

        ListNode* deleteTemp = curr->next;

        curr->next = curr->next->next;
        
        delete(deleteTemp);
        return head;
    }
};