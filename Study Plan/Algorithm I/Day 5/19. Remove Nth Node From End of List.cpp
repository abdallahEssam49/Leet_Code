class Solution {
public:
   ListNode *removeNthFromEnd(ListNode *head, int n) 
{
    int ret = 0;
    ListNode *temp(head);
     
    while (temp) ret++ , temp = temp->next;
     
    if (n == ret)
      return head->next;
     
    ret-= n; temp = head;
     
    for(int i=1 ; i<ret ;++i)
      temp = temp->next;
     
    temp->next = temp->next->next;
    return head;
}
};
