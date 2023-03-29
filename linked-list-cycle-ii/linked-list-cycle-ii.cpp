/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode *p,*q;
        if(head==nullptr){
            return head;
        }
        p=q=head;
        do{
            p=p->next;
            q=q->next;
            q=q?q->next :q;
        }while(p&&q and p!=q);
        if(p==q){
            while(head && p and p!=head){
                p=p->next;
                head = head->next;
            }
            return p;
        }
        
    return nullptr;
    }
};