class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int start=0,current=0,tgas=0,tcost=0;
        for(int i=0;i<gas.size();i++){
            tgas+=gas[i];
        }
        for(int i=0;i<cost.size();i++){
            tcost+=cost[i];
        }
        if(tgas<tcost)return -1;
        for(int i=0;i<gas.size();i++){
            current+=gas[i]-cost[i];
            if(current<0){
                start=i+1;
                current=0;
            }
        }
        return start;
    }
};