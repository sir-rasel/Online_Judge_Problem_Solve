/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
// class Solution {
// public:
//     ListNode* swapPairs(ListNode* head) {
//         if(head==NULL||head->next==NULL) return head;
//         ListNode *ans = swapPairs(head->next->next);
//         ListNode* n = head->next;
//         head->next->next=head;
//         head->next=ans;
//         return n;
//     }
// };

class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(head!=NULL && head->next != NULL){
            swap(head->val,head->next->val);
            swapPairs(head->next->next);
        }
        return head;
    }
};
