class Solution {
public:
    bool isHappy(int n) {
        int slow = n;
        int fast = n;
        do{
            slow=square(slow);
            fast=square(square(fast));
        }while(slow!=fast);
        return slow==1;
    }
    int square(int n){
        int ans=0;
        while(n){
            int temp = n%10;
            ans+=(temp*temp);
            n=n/10;
        }
        return ans;
    }
};