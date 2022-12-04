class Solution {
public:
    int longestPalindrome(string s) {
        map<char,int>hm;
        for(int i=0;i<s.length();i++){
            char c=s[i];
            if(hm.count(c))
                hm[c]=hm[c]+1;
            else
                hm[c]=1;
        }
        
        int ans =0;
        bool firstodd = false;
        for(auto &pair : hm){
            if(pair.second%2==0){
                ans+=pair.second;
            }
            else if(firstodd==false){
                ans+=pair.second;
                firstodd=true;
            }
            else{
                ans+=pair.second-1;
            }
        }
        return ans;
    }
};