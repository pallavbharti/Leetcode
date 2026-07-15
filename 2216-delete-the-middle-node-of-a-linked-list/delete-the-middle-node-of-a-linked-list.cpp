class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast = head;
        if(head->next == NULL)return NULL;
        while(fast!=NULL && fast->next !=NULL){
            slow = slow->next;
            fast = fast->next->next;
        } // middle at SLOW pointer
        ListNode* temp = head;
        while(temp->next!=slow){
            temp=temp->next;
        }
        temp->next = temp->next->next;
        delete slow;
        return head;
    }
};