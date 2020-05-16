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
class Solution{
public:
    ListNode* oddEvenList(ListNode* head){
        if(head==NULL or head->next==NULL)
            return head;
        ListNode *a=head, *b=head->next, *head1=head->next;
        while(a->next!=NULL and b->next!=NULL){
            a->next=b->next;
            a = a->next;

            b->next = a->next;
            b = b->next;
        }
        a->next = head1;
        return head;
    }
};
