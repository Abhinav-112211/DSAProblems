class Solution {
private:
    void dfs(vector<vector<int>>& image,vector<vector<int>>& ans,int newCol,int delRow[],int delCol[],int iniCol,int row,int col){
        int n = image.size();
        int m = image[0].size();
        ans[row][col] = newCol;
        for(int i=0;i<4;i++){
            int nRow = row + delRow[i];
            int nCol = col + delCol[i];
            if(nRow>=0 && nRow<n && nCol<m && nCol>=0 && ans[nRow][nCol]!=newCol && image[nRow][nCol]==iniCol)
                dfs(image,ans,newCol,delRow,delCol,iniCol,nRow,nCol);
        }
    }
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newCol) {
        int iniCol = image[sr][sc];
        vector<vector<int>>ans = image;
        int delRow[] = {-1,0,1,0};
        int delCol[] = {0,1,0,-1};
        dfs(image,ans,newCol,delRow,delCol,iniCol,sr,sc);
        return ans;
    }
};