class Solution {
public:
    class comp{
        public:
            bool operator()(pair<int,string>&a,pair<int,string>&b){
                if(a.first!=b.first){
                    return a.first>b.first;
                }
                return a.second<b.second;
            }
    };
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int>map;
        for(auto i:words)map[i]++;
        vector<string>str;
        //MIN HEAP--
        priority_queue<pair<int,string>,vector<pair<int,string>>,comp>pq;
        for(auto i:map){
            if(pq.size()<k){
                pq.push({i.second,i.first});
            }else{
                if(pq.top().first<i.second){
                    pq.pop();
                    pq.push({i.second,i.first});
                }else if(pq.top().first==i.second && pq.top().second>i.first){
                    pq.pop();
                    pq.push({i.second,i.first});
                }
            }
        }
        while(!pq.empty()){
            str.push_back(pq.top().second);
            pq.pop();
        }
        reverse(str.begin(),str.end());
        return str;
    }
};