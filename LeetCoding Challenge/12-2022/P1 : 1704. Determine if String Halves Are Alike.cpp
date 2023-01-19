class Solution {
public:
    bool halvesAreAlike(string s) {
        int len = s.length();
        int cnt = 0;
        for(int i=0 ; i<len/2 ; ++i)
        {
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' 
            || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')cnt++;
          
            if(s[i+len/2] == 'a' || s[i+len/2] == 'e' || s[i+len/2] == 'i' || s[i+len/2] == 'o' || s[i+len/2] == 'u' 
            || s[i+len/2] == 'A' || s[i+len/2] == 'E' || s[i+len/2] == 'I' || s[i+len/2] == 'O' || s[i+len/2] == 'U')cnt--;

        }
        if(cnt)return false;
        return true;
    }
};
