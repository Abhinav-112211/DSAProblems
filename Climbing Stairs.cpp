class Solution {
public:
    int climbStairs(int n) {
       vector<int> table(n+2,0);
       table[0]=0;
       table[1]=1;
       table[2]=2;
       if(n<=2)return table[n];
       for(int i=3;i<=n;i++){
           table[i]=table[i-1]+table[i-2];
       }
       return table[n];
    }
};