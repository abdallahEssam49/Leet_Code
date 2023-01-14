class Solution {
public:
    bool checkInclusion(string s1, string s2) {
       
        int len1 = s1.length();
        int len2 = s2.length();

        if(len1 > len2) return false;

        vector<int>v1(26,0);
        vector<int>v2(26,0);
   
        for(int i=0;i<len1;i++){
            v1[s1[i]-'a']++;
            v2[s2[i]-'a']++;
        }

        if(v1 == v2) return true;

        for(int i=len1 ; i<len2;i++){
            
            v2[s2[i-len1]-'a']--;
            v2[s2[i]-'a']++;

            if(v1 == v2) return true;;

        }
        return false;
        
    }
};
