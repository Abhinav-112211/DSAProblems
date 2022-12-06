class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int>ransom(26,0);
        
        for(int i=0;i<magazine.length();i++){
            ransom[magazine[i]-'a']+=1;
        }
        for(int i=0;i<ransomNote.length();i++){
            if(ransom[ransomNote[i]-'a']==0)
                return false;
            ransom[ransomNote[i]-'a']-=1;
        }
        return true;
    }
};