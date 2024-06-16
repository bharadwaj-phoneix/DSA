class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* res = head;
        ListNode* fast = head;
        while(fast!=NULL && fast->next!=NULL){
            fast = fast->next->next;
            res = res->next;
        } 
        return res;
    }
};
