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
    ListNode* partition(ListNode* head, int x) {
        ListNode* low= new ListNode(0);
        ListNode* high= new ListNode(0);
        ListNode* th = high;
        ListNode* tl = low;
        ListNode* temp = head;
        while(temp){
            if(temp->val < x){
                tl->next = temp;
                temp = temp->next;
                tl = tl->next;
            }else{
                th->next = temp;
                temp = temp->next;
                th = th->next;
            }
        }
        tl->next = high->next;
        th->next = NULL;
        return low->next;

    }
};