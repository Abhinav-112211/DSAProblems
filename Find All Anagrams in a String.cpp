class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int slen=s.size();
        int plen=p.size();
        if(slen<plen)return {};
        vector<int>phash(26,0);
        vector<int>shash(26,0);
        vector<int>ans;
        for(int i=0;i<plen;i++){
            phash[p[i]-'a']++;
            shash[s[i]-'a']++;
        }
        if(phash==shash)ans.push_back(0);
        for(int i=plen;i<slen;i++){
            shash[s[i]-'a']++;
            shash[s[i-plen]-'a']--;
            if(phash==shash)ans.push_back(i-plen+1);
        }
        return ans;
    }
};