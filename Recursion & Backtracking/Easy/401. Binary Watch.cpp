Problem_Link : https://leetcode.com/problems/binary-watch/
Profile : https://leetcode.com/abdallahessam2029/

class Solution {
public:
    
    vector<string>ans;
    int mh[10] = {1,2,4,8,1,2,4,8,16,32};
    bool vis[10];
    
    string con_int_to_string(int k)
    {
        stringstream ss; 
        ss<<k;
        string s; 
        ss>>s; 
        return s; 
    }
    
    void dp(int leds  , int min , int h , int start)
    {
        if (min >59 || h>11)return; 
        
        if (leds == 0)
        {
            if (min <= 59 && h <= 11)
            {
                string h_st = con_int_to_string(h);
                string m_st = con_int_to_string(min);
                
                if (min % 10 == min) m_st = '0' + m_st;
                ans.push_back(h_st + ":" + m_st);
                return; 
            }
        }
        
        for (int i=start  ; i<10 ; ++i){
        
        if (!vis[i])
        {
            vis[i] = 1;
            if (i < 4) dp(leds -1 , min , h+mh[i] , i+1);
            else dp(leds -1 , min+mh[i] , h , i+1);
            vis[i] =0;
        }
        
    }
    }
    
    
    
    vector<string> readBinaryWatch(int turnedOn) {
        dp(turnedOn , 0 , 0 , 0);
        return ans; 
    }
};
