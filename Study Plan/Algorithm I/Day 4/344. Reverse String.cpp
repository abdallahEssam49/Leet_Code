class Solution {
public:
    void reverseString(vector<char>& s) {
        
        ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
        int i=0 , j = s.size() - 1;
        while(j >= i){
            swap(s[i] , s[j]);
            i++;j--;
        }

    }
};
