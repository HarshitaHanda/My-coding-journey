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
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        ListNode* odd = head;
        ListNode* even = head->next;
        ListNode* temp = head->next;
        // ListNode* temp=head->next;
        while (even != NULL && even->next != NULL)
         { // Ensure even is valid before accessing even->next
            odd->next = odd->next->next; // Connect odd nodes
            even->next = even->next->next;    
            odd = odd->next;     // Move odd pointer
            even = even->next; // Connect even nodes
                // Move even pointer
        }

        odd->next = temp; // Attach even list to the end of the odd list

        return head;
    }
};