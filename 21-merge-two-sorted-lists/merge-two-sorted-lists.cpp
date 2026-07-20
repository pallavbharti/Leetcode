class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* ans = new ListNode(100);
        ListNode* lo = ans;

        while(list1 && list2){
            if(list1->val <= list2 ->val){
                lo ->next = list1;
                list1=list1->next;
                lo = lo->next;
            }
            else{
                lo ->next = list2;
                list2=list2->next;
                lo = lo->next;
            }
        }
        if(list1) lo->next = list1;
            
        if(list2) lo->next = list2;
        
        return ans->next;
    }
};