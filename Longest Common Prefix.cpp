class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = strs[0];
        for(int i=1;i<strs.size();i++){
            ans=findprefix(ans,strs[i]);
        }
        return ans;
    }
    string findprefix(string ans, string next){
        if(ans.size()>next.size())swap(ans,next);
        string str="";
        for(int i=0;i<ans.size();i++){
            if(ans[i]==next[i])str+=ans[i];
            else break;
        }
        return str;
    }
};