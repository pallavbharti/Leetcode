class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        ListNode* temp = head;
        int len =0;
        while(temp){
            len++;
            temp = temp->next;
        }
        int steps = len - n - 1;   
        
        if(steps < 0) return head->next;   

        temp = head;
        for(int i=0;i<steps;i++){
            temp=temp->next;
        }
        temp->next = temp->next->next;
        return head;
    }
};