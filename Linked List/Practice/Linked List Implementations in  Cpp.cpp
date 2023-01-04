
#include <bits/stdc++.h>
using namespace std;

// Creating a node
class Node{
    public:
    int val; 
    Node* next;
};

int main() {
    
    Node* head;
    Node* one = nullptr;
    Node* two = nullptr;
    Node* three = nullptr;
    
  // allocate 3 nodes in the heap
    
    one = new Node();
    two = new Node();
    three = new Node();
    
  // Assign value values
    
    one->val = 1; 
    two->val = 2;
    three->val = 3;

  // Connect nodes
    
    one -> next = two; 
    two -> next = three;
    three ->next = nullptr;

  // print the linked list value
    
    head = one ;
    while(head)
    {
        cout << head->val << " ";
        head = head -> next; 
    }
}
