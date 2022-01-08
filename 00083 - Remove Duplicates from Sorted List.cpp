class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if (!head) {
            return head;
        }
        ListNode *slow = head, *fast = head->next;
        while (fast) {
            if (fast->val == slow->val) {
                slow->next = fast->next;
                delete fast;
            } else {
                slow = slow->next;
            }
            
            fast = slow->next;
        }
        
        return head;
    }
};