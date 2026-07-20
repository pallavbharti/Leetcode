
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
    ListNode* sortList(ListNode* head) {
        //base case:
        if(head==NULL || head->next==NULL)return head;
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow = slow->next;
            fast=fast->next->next;
        }// slow at left middle
        ListNode* a = head;
        ListNode* b = slow->next;
        slow->next = NULL;
        a = sortList(a);
        b = sortList(b);
        ListNode* c = mergeTwoLists(a,b);
        return c;
    }
};