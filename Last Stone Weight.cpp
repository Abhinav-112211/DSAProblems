class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>heap;
        for(int i=0;i<stones.size();i++){
            heap.push(stones[i]);
        }
        while(heap.size()>1){
            int x=heap.top();
            heap.pop();
            int y = heap.top();
            heap.pop();
            if(x>y)heap.push(x-y);
        }
        return heap.empty()? 0 : heap.top();
    }
};