
#include <bits/stdc++.h>
using namespace std;

// Creating a node
class Node{
    public:
    int val; 
    Node* next;
};

int main() {
    
    int n; cin>>n;
    vector < Node* > vec(n);
    for(int i=0 ; i<n ; ++i)
    {
        int x; cin>>x;
        //vec[i] = nullptr;
        vec[i] = new Node();
        vec[i]->val = x;
        //vec[i]->next = vec[i+1];
    }
    
    for(int i=0 ; i<n ; ++i)
    {
        cout << vec[i] -> val << " ";
    }
}
