class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        unordered_map<int,int>map;
        for(auto task:tasks){
            map[task]++;
        }
        int round=0;
        for(auto x:map){
            if(x.second<=1)return -1;
            else if(x.second==2 || x.second==3)round++;
            else{
                round+=ceil((double)x.second/3.0);
            }
        }
        return round;
    }
};