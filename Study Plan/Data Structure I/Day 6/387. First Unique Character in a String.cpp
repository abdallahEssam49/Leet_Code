class Solution {
public:
    int firstUniqChar(string s) {
        ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
        int len = s.length();
        int a[26] = {0};
        for(int i=0 ; i<len ;++i)a[s[i]-'a']++;
        for(int i=0 ; i<len ;++i)
        {
            if(a[s[i]-'a'] == 1)return i;
        }

        return -1;
    }
};
