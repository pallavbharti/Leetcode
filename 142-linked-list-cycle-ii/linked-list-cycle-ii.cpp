class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode * slow =head;
        ListNode * fast = head;
        int flag = false;
        while(fast && fast->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast) {
                flag = true;
                break;      
            }
        }
        if(flag){
            ListNode * temp = head;
            if(temp == slow) return slow;
            while(temp){
                temp = temp->next;
                slow = slow->next;
                if(temp == slow) return slow;
            }
        }return NULL;
    }
};