/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *tempA = headA;
        ListNode *tempB = headB;
        int lenA = 0;
        int lenB = 0;
        while(tempA){
            lenA++;
            tempA=tempA->next;
        }

        while(tempB){
            lenB++;
            tempB=tempB->next;
        }
        tempA = headA;
        tempB = headB;

        int diff = abs(lenA - lenB);

        if(lenA>lenB){
            for(int i =0;i<diff;i++)  tempA = tempA->next;
            
        }else{    // lenB>lenA
            for(int i =0;i<diff;i++)  tempB = tempB->next;
        }
        while(tempA!=tempB){
            tempA = tempA->next;
            tempB = tempB->next;
        }
        return tempA;
    }
};