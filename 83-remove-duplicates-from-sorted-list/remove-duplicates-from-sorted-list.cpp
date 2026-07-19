class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;

        ListNode* a =  head;
        ListNode* b =  head->next;
        while(b){
            while(b && b->val == a->val){
                b = b->next;
            }
            a->next = b;
            //next round
            a = b;
            if(b)b = b->next; 
    }
    return head;
    }
};