/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
    int get_length(ListNode* head){
        int cnt=0;
        ListNode*ptr=head;
        while(ptr!=nullptr)
        {
            cnt++;
            ptr=ptr->next;
        }

        return cnt;
    }

public:
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
        ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
        int L1 = get_length(headA);
        int L2 = get_length(headB);

        while(L1>L2)
        {
            L1--;
            headA=headA->next;
        }

        while(L1<L2)
        {
            L2--;
            headB=headB->next;
        }

        while(headA!=headB)
        {
            headA=headA->next;
            headB=headB->next;
        }

        return headB;
    }
};
