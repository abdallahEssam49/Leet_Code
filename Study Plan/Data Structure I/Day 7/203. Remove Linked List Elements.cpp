class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        
        while(head != NULL && head -> val == val) head = head -> next;

        ListNode* curr = head;
        if(head == nullptr)return head;
        
        while(curr->next != NULL)
        {
            if(curr->next->val == val)
                curr->next = curr->next->next;
            else curr = curr->next;
        }
        return head;
    }
};
