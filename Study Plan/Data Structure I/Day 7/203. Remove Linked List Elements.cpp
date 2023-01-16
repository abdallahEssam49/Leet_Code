// My Solution

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {

        ListNode* dummy = new ListNode(); // dummy node
        dummy -> next = head;
        ListNode* prev = dummy;
        ListNode* curr = head ;
        ListNode* next;

        while(curr)
        {
            next = curr->next;
            if(curr -> val == val)
                prev -> next = next;
            else 
                prev = curr;
            curr = next;
        }
        
        return dummy -> next;
    }
};


// Another Solution


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
