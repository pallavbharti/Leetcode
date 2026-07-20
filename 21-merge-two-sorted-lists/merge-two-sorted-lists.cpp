class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* ans = new ListNode(100);
        ListNode* lo = ans;
        ListNode* l1 = list1;
        ListNode* l2 = list2;
        while(l1 && l2){
            if(l1->val <= l2 ->val){
                lo ->next = new ListNode(l1->val);
                l1=l1->next;
                lo = lo->next;
            }
            else{
                lo ->next =new ListNode(l2->val);
                l2=l2->next;
                lo = lo->next;
            }
        }
        if(l1) lo->next = l1;
            
        if(l2) lo->next = l2;
        
        return ans->next;
    }
};