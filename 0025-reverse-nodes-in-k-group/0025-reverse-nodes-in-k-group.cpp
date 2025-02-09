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
    ListNode* getkthNode(ListNode* temp, int k){
        ListNode* kth=temp;
        k-=1;
        while(kth!=NULL && k>0){
            k-=1;
            kth=kth->next;
        } return kth;
         

    }
    ListNode* reverseNodes(ListNode* temp){
        ListNode* tempo=temp;
        ListNode* prev=NULL;
        while(tempo!=NULL){
            ListNode*fwd=tempo->next;
            tempo->next=prev;
            prev=tempo;
            tempo=fwd;

        } return prev;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {
        //if(head==NULL || head->next==NULL) return head;
        ListNode* temp=head;
        ListNode*prev=NULL;
        while(temp!=NULL){
            ListNode* kthNode=getkthNode(temp,k);
            if(kthNode==NULL)
            {
                if(prev) prev->next=temp;
                break;

            }
            ListNode* nextNode=kthNode->next;
            kthNode->next=NULL;
            reverseNodes(temp);
            if(temp==head) head=kthNode;
            else prev->next=kthNode;
            prev=temp;
            temp=nextNode;

        } return head;
    }
};