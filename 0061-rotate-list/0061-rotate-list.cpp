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
        if(head==NULL || head->next==NULL || k==0) return head;
        ListNode* tail=head; int count=1; 
        while(tail->next!=NULL){
            count++; 
            tail=tail->next;
        }
        k=k%count;
        if(k==0) return head;
        tail->next=head;
        ListNode* tempo=head;
        k=count-k; int cnt=1; 
        while(tempo!=NULL){
            if(cnt==k) {head=tempo->next; tempo->next=NULL;}
            cnt++; 
            tempo=tempo->next;
        } 
        // head=tempo->next;
        // tempo->next=NULL;
        return head;

    }
};