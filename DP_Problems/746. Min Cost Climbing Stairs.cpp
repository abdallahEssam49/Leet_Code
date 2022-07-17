Problem_Link : https://leetcode.com/problems/min-cost-climbing-stairs/
Profile : https://leetcode.com/abdallahessam2029/

class Solution {
public:
    vector <int> dp;
    int dp_solution(int s, vector<int> &cost, int n){
        
        if(s >= n)return 0; 
        if(dp[s] != -1) return dp[s];
        
        return dp[s] = min(cost[s] + dp_solution(s+1 , cost , n) , 
                           cost[s] + dp_solution(s+2 , cost , n));
        
    }
    
    int minCostClimbingStairs(vector<int>& cost) {
        
        int n = cost.size();
        dp = vector<int>(n , -1);
        if(n > 1)
        return min( dp_solution(0 , cost , n) , dp_solution(1 , cost , n) ) ;
        return dp_solution(0 , cost , n);
    }
    
};
