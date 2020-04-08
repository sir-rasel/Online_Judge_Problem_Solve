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
    ListNode* middleNode(ListNode* head) {
        ListNode *temp = head;
        int count=0;
        while(temp){
            count++;
            temp = temp->next;
        }

        count/=2;
        while(count){
            head = head->next;
            count--;
        }
        return head;
    }
};
