class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int count = 0;
        ListNode* temp = head;
        while(temp != NULL) {
            count++;
            temp = temp->next;
        }
        temp = head;
        count /= 2;
        for(int i = 1; i <=count; i++) {
            temp = temp->next;
        }
        return temp;
    }
};
