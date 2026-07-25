class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        ListNode* low= new ListNode(0);
        ListNode* high= new ListNode(0);
        ListNode* th = high;
        ListNode* tl = low;
        ListNode* temp = head;
        int idx = 0;
        while(temp){
            if(idx%2==0){
                tl->next = temp;
                temp = temp->next;
                tl = tl->next;
                idx++;
            }else{
                th->next = temp;
                temp = temp->next;
                th = th->next;
                idx++;
            }
        }
        tl->next = high->next;
        th->next = NULL;
        return low->next;
    }
};