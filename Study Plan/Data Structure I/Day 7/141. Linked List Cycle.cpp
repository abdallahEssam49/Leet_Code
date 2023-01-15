class Solution {
public:
    bool hasCycle(ListNode *head) {

        int checker = 1e6;
        while(head!=NULL)
        {
            if(head->val == 1e6)return true;
            head->val=1e6;
            head=head->next;
        }
            return false;        
    }
};
