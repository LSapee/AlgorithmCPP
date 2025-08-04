class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        deque<int> DQ;
        unordered_map<int,int> mp;
        int ans = 0;
        int n =fruits.size();
        int cnt = 0;
        for(int i=0; i<n; i++){
            int cur = fruits[i];
            mp[cur]++;
            cnt++;
            DQ.push_back(cur);
            if(mp.size()>2){
                while(!DQ.empty()){
                    int temp = DQ.front(); DQ.pop_front();
                    mp[temp]--;
                    cnt--;
                    if(mp[temp]==0){
                        mp.erase(temp);
                        break;
                    }
                }
            }
            ans = max(ans,cnt);
        }
        return ans;
    }
};