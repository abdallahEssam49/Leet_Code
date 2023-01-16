class Solution {
public:
    bool isValid(string s) {
       stack<char>p;
       for(auto ch:s){
       if(ch=='(' || ch=='{' || ch=='['){
           p.push(ch);
       } else{
           if(p.empty()) return false;
           if(ch==')')if(p.top()=='(')p.pop();
           else return false;
           if(ch==']') if(p.top()=='[')p.pop();
           else return false;
           if(ch=='}') if(p.top()=='{')p.pop();
           else return false;
       }
     }
    if(p.empty()) return true;
    return false;
    }
};
