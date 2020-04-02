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
    ListNode* reverseList(ListNode* head) {
        if(head==NULL or head->next==NULL) return head;
        ListNode* ans = reverseList(head->next);
        head->next->next = head;
        head->next = NULL;
        return ans;
    }
};

// class Solution {
// public:
//     ListNode* reverseList(ListNode* head) {
//         ListNode* prev = NULL;
//         ListNode* curr = head;
//         while(curr!=NULL){
//             ListNode* temp = curr->next;
//             curr->next = prev;
//             prev = curr;
//             curr = temp;
//         }
//         return prev;
//     }
// };
