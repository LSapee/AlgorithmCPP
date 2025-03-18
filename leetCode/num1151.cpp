class Solution {
public:
    int minSwaps(vector<int>& data) {
        int cnt =0;
        int ans =INT_MAX;
        for(int i=0; i<data.size(); i++)if(data[i]==1)cnt++;
        deque<int> DQ;
        int dqOneCnt = 0;
        int st =0;
        for(int i=0; i<data.size(); i++){
            DQ.push_back(data[i]);
            if(data[i]==1)dqOneCnt++;
            if(DQ.size()==cnt){
                if(DQ.size()-dqOneCnt < ans) ans = DQ.size()-dqOneCnt;
                if(DQ.front()==1)dqOneCnt--;
                DQ.pop_front();
            }
        }
        return ans == INT_MAX ? 0 :ans;
    }
};