class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
        int len1 = ransomNote.length();
        int len2 = magazine.size();
        int a[26] = {0} , b[26] = {0};
        for(int i=0 ; i<len1 ; ++i)a[ransomNote[i]-'a']++;
        for(int i=0 ; i<len2 ; ++i)b[magazine[i]-'a']++;
        
        for(int i=0 ; i<26 ; ++i)
        {
            if(a[i] > b[i])return false;
        }

        return true; 
    }
};
