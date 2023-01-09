Problem_Link : https://leetcode.com/problems/contains-duplicate/description/
Profile : https://leetcode.com/abdallahessam2029/

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        unordered_map<int, bool> numMap;
        for(int val: nums){
            if(numMap[val]){
                return true;
            }
            numMap[val] = true;
        }
        return false;
    }
};
