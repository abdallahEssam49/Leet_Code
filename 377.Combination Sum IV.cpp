Problem_Link : https://leetcode.com/problems/climbing-stairs/
Profile : https://leetcode.com/abdallahessam2029/

class Solution {
public:
    int dp_sol(vector <int> &nums ,   int  target , vector<int> &dp){
    
    if(target == 0) return 1;
    if(target < 0) return 0;
    
    if(dp[target] != -1) return dp[target];
    int ans = 0;
    for(int i = 0 ; i < nums.size() ; i++){
        
        ans += dp_sol(nums , target - nums[i] , dp);
    
    }
        return dp[target] = ans;
        
        }
    
    int combinationSum4(vector < int > & nums, int target) {

    vector<int> dp(1001 , -1);
    return dp_sol(nums , target , dp);
}
};
