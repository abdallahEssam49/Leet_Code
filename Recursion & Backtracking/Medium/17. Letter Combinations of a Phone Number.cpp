Problem_Link : https://leetcode.com/problems/letter-combinations-of-a-phone-number/
Profile : https://leetcode.com/abdallahessam2029/

class Solution {
public:
    
     vector<string> ans;
    string nums[10] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    
    void solve(string digits, vector<string> &ans, string nums[], int i, string s){
        
        if(i == digits.length()) {ans.push_back(s); return;}
        
        string val = nums[digits[i]-'0'];
        
        for(int j=0;j<val.length();j++){
            solve(digits,ans,nums,i+1,s+val[j]);
        }
        
    }
    
    vector<string> letterCombinations(string digits) {
        
        if(digits.length() == 0) {return ans;}
        solve(digits,ans,nums,0,"");
        return ans;
    }
};
