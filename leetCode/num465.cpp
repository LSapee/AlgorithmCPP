class Solution {
public:
    int ans = INT_MAX;
    int M;
    void back(vector<int> &my,int i,int cnt){
        if(cnt>=ans)return ;
        if(M==i){
            ans= min(ans,cnt);
            return ;
        }
        if(my[i]==0){
            back(my,i+1,cnt);
            return;
        }
        for(int cur = i+1; cur<M; cur++){
            if(my[i]*my[cur]<0){
                my[cur]+=my[i];
                back(my,i+1,cnt+1);
                my[cur]-=my[i];
            }
        }

    }
    int minTransfers(vector<vector<int>>& transactions) {
        vector<int> arr(12,0);
        int n = transactions.size();
        for(int i=0; i<n; i++){
            int a =transactions[i][0];
            int b =transactions[i][1];
            int money =transactions[i][2];
            arr[a] -= money;
            arr[b] += money;
        }
        vector<int> my;
        for(int i=0; i<12; i++) if(arr[i]!=0)my.push_back(arr[i]);
        M=my.size();
        back(my,0,0);
        return ans;
    }
};