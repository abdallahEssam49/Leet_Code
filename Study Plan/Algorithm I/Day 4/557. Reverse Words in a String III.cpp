class Solution {
public:

    void rev(string &str , int start , int end)
    {
        while(end>start)swap(str[start++] , str[end--]);
    }
    string reverseWords(string s) {

        ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
        int j=0;
        int len = s.size(); 
        for(int i=0 ;i<len ; ++i)
        {
            if(s[i]==' ')
            {
                rev(s,j,i-1);
                j=i+1;
            }
        } 

        if(len > j)rev(s , j , len-1);
        return s;
    }
};
