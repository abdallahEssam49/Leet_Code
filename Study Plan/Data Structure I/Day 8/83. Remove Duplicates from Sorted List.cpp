class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        
        if(head==nullptr) return head;
        ListNode *temp=head;
        while(temp){
            if(temp->next != nullptr && temp->val == temp->next->val)
                temp->next = temp->next->next;

            else
                temp=temp->next;
        }

        return head;
    }
};
