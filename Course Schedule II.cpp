class Solution {
public:
    bool dfs(vector<vector<int>>&graph,vector<int>&colour,vector<int>&res,int i){
        colour[i]=1;
        for(auto neighbour:graph[i]){
            if(colour[neighbour]==1)return true;
            if(colour[neighbour]==0){
                if(dfs(graph,colour,res,neighbour))return true;
            }
        }
        colour[i]=2;
        res.push_back(i);
        return false;
    }
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>>graph(numCourses);
        vector<int>colour(numCourses,0),res;
        for(auto pre:prerequisites){
            graph[pre[0]].push_back(pre[1]);
        }
        for(int i=0;i<numCourses;i++){
            if(!colour[i]){
                if(dfs(graph,colour,res,i))return {};
            }
        }
        return res;
    }
};