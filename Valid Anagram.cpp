class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int>anagram(26,0);
        if(s.length()!=t.length())
            return false;
        
        for(int i=0;i<s.length();i++){
            anagram[s[i]-'a']+=1;
        }
        for(int i=0;i<t.length();i++){
            if(anagram[t[i]-'a']==0)
                return false;
            anagram[t[i]-'a']-=1;
        }
        return true;
    }
};