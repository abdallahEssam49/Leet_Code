Problem_Link : https://leetcode.com/problems/climbing-stairs/
Profile : https://leetcode.com/abdallahessam2029/

class Solution {
public:

    // dp solution with memoization

    int dp_sol(int n,vector<int>&dp){
    if(n<0)return 0;
    if(n==0)return 1;

    if(dp[n]!=-1)return dp[n];
    return dp[n] = dp_sol(n-1,dp) + dp_sol(n-2,dp);

}

    long long climbStairs(int n) {

        vector<int>dp(n+1 , -1);
        return dp_sol(n , dp);

    }
};
