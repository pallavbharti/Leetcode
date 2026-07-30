class Solution {
public:
    ListNode* reverse(ListNode* head){
        ListNode* curr = head;
        ListNode* prev = NULL;
        ListNode* Next = NULL;
        while(curr){
            Next = curr->next;
            curr->next=prev;
            prev = curr;
            curr = Next;
        }return prev;
    }

    bool isPalindrome(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }// slow is at left middle :
        ListNode* right = reverse(slow->next);
        ListNode* a = head;
        ListNode* b = right;
        while(b){
            if(a->val==b->val){
                a=a->next;
                b=b->next;
            }else return false;
        }
        return true;
    }
};