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
        //if (count == 0) return head->next;
        ListNode* tempo=head; int count=0;
        while(tempo!=NULL){
            count++;
            tempo=tempo->next;
        }
       // if (count == 0) return head->next;
        count=count-n;
        if (count == 0) return head->next;
        ListNode* prev=head; 
        //head->next;
        for(int i=1;i<count;i++){
          //  prev=prev->next;
            prev=prev->next;
        } 
        ListNode* fwd=prev->next;
        prev->next=fwd->next;
        delete fwd;
        return head;
        
    }
};