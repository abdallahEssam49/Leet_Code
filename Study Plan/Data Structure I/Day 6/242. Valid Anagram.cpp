class Solution {
public:
    bool isAnagram(string s, string t) {
        ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
        int len1 = s.length();
        int len2 = t.length();

        int a[26] = {0};

        if(len1!=len2)return false;
        for(int i=0 ;i<len1 ;++i)
        {
            a[s[i]-'a']++;
            a[t[i]-'a']--;
        }

        for(int i=0 ; i<26 ; ++i)
            if(a[i])return false;
        return true; 
    }
};
