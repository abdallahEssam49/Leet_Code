Problem_Link : https://leetcode.com/problems/two-sum/?envType=study-plan&id=data-structure-i
Profile : https://leetcode.com/abdallahessam2029/

class Solution {
public:
    vector<int> twoSum(vector<int>& a, int t) {
        ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
        int len = a.size();
        unordered_map <int , int>map;
        for(int i=0 ; i<len ; ++i)
        {
            if(map.find(t-a[i])==map.end())
            {
                map[a[i]]=i;
            }
            else 
            {
                return {map[t-a[i]] , i };
            }
        }

        return {};
    }
};
