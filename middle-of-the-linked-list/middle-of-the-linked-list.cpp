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

    int count(ListNode* head){
	int counter=0;
	while(head!=nullptr){
		counter++;
		head=head->next;
	}
	    return counter;
    }
    ListNode* middleNode(ListNode* head) {
      int size = count(head);
			int mid = 0;

			if(size%2==0){
	    	 mid = (size+1)/2;
			}else{
	    	 mid = (size-1)/2;
			}

      while(mid>0 && head){
				head=head->next;
				mid--;
			}
		return head;    
    }
};