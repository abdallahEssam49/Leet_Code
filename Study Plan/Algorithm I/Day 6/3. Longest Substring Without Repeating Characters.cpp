class Solution {
public:
	int lengthOfLongestSubstring(string s) 
	{
        ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
        int len = s.length();
		unordered_set<char> set;
		int i = 0 , j = 0 , ret = 0;
    
		while(j<len)
		{
			if(set.find(s[j]) == set.end()) 
			{
				set.insert(s[j++]); 
				ret = max(ret, j-i); 
			}
			else set.erase(s[i++]); 
		}
    
		return ret;
	}
};
