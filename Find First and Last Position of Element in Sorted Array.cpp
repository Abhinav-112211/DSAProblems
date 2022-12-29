class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans(2,-1);
        ans[0]=findLeft(nums,target);
        ans[1]=findRight(nums,target);
        return ans;
    }
    int findLeft(vector<int>nums,int target){
        int index =-1;
        int low=0;
        int high=nums.size()-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]>=target)high = mid-1;
            else low=mid+1;
            if(nums[mid]==target)index=mid;
        }
        return index;
    }
    int findRight(vector<int>nums,int target){
        int index=-1;
        int low=0;
        int high=nums.size()-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]==target)index=mid;
            if(nums[mid]<=target)low=mid+1;
            else high=mid-1;
        }
        return index;
    }
};