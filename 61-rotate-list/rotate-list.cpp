class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next == NULL) return head;
        ListNode* temp = head;
        ListNode* tail = head;
        int len = 0; 
        while(temp){
            if(temp->next == NULL ) tail = temp;
            temp=temp->next;
            len++;
        }temp = head;

        k = k % len;
        if(k==0)return head;
        for(int i =0;i<len-k-1;i++)temp = temp->next;
            tail->next = head;
            head = temp->next;
            temp->next = NULL;
            return head;
    }
};