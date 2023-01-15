class Solution {
public:
	int lengthOfLongestSubstring(string s) 
	{
		ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
		int len = s.length();
		unordered_map<char , int > map;
		int i = 0 , j = 0 , ret = 0;

		while(j<len)
		{
			if(!map[s[j]]) 
			{
				map[s[j++]]++;
				ret = max(ret, j-i); 
			}
			else map[s[i++]]--; 
		}

		return ret;
	}
};
