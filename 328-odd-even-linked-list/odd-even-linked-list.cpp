class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        ListNode* lo = new ListNode(100);
        ListNode* hi = new ListNode(100);
        ListNode* tempLo = lo;
        ListNode* tempHi = hi;
        ListNode* temp = head;
        int idx = 0;
        while(temp){
            if(idx%2==0){
                tempLo->next = temp;
                idx++;
                tempLo = tempLo->next;
                temp = temp->next;
            }
            else{
                tempHi->next = temp;
                idx++;
                tempHi = tempHi->next;
                temp = temp->next; 
            }
        }
        tempHi->next = NULL;
        tempLo -> next = hi->next;
        return lo->next;
    }
};