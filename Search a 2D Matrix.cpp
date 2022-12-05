class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(!matrix.size())return false;
        int n=matrix.size();
        int m=matrix[0].size();
        int lo =0;
        int hi = m*n-1;
        while(lo<=hi){
            int mid = (lo+hi)/2;
            if(matrix[mid/m][mid%m]==target)
                return true;
            if(matrix[mid/m][mid%m]>target)
                hi = mid-1;
            else
                lo = mid+1;
        }
        return false;
    }
};