class Solution {
public:
    string arrangeWords(string text) {
        string temp;
        map<int,vector<string>>map;
        int len=0;
        for(char c:text){
            if(c==' '){
                map[len].push_back(temp);
                temp="";
                len=0;
            }
            else{
                c = tolower(c);
                len+=1;
                temp+=c;
            }
        }
        map[len].push_back(temp);
        string ans;
        for(auto it:map){
            for(string s:it.second){
                ans+=s;
                ans+=" ";
            }
        }
        ans[0]=toupper(ans[0]);
        ans.pop_back();
        return ans;
    }
};