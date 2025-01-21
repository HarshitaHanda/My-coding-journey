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
    ListNode* middleNode(ListNode* head) {
        int count = 0;ListNode*tempo=head;
        while(tempo!=NULL){
            count++; tempo=tempo->next;
        }
        ListNode* temp = head;
        // count=count/2;
        if (count % 2 == 0) {
            count = count / 2;
            int cnt = 0;
            while (temp != NULL) {
                cnt++;
                if (cnt == count) {
                   return temp->next; 
                   //break;
                }
                temp = temp->next;
            }

        } else {
            count = ceil(count / 2 +1 );
            int cnt = 0;
            while (temp != NULL) {
                cnt++;
                if (cnt == count) {
                    //return temp;
                    break;
                }
                temp = temp->next;
            }
        } return temp;
    }
};