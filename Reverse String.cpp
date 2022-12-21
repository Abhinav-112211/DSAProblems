class Solution {
public:
    void reverseString(vector<char>& s) {
        vector<char>map;
        int n = s.size();
        for(int i=s.size()-1;i>=0;i--){
            map.push_back(s[i]);
        }
        for(int i=0;i<n;i++){
            s[i]=map[i];
        }
    }
};