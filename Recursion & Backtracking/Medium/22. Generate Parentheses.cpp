Problem_Link : https://leetcode.com/problems/generate-parentheses/
Profile : https://leetcode.com/abdallahessam2029/

class Solution {
public:
    
    vector <string>vec; 
    
    void dp( string s , int l , int r ,int input)
    {
        if(l == input && r == input)vec.push_back(s);
        
        if(input > l)
        dp(s + '(' , l+1 , r , input);
        if(l > r)
        dp(s + ')' , l , r+1 , input);

    }
    
    vector<string> generateParenthesis(int n) {
        dp("" , 0 , 0 , n);
        return vec;
    }
};
