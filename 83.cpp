class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* cur = head;
        while (cur && cur->next) {
            if (cur->next && cur->val == cur->next->val) {
                cur->next = cur->next->next;
                continue;
            }
            cur = cur->next;
        }
        return head;
    }
};
