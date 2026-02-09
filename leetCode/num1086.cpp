class Solution {
public:
    int n;
    vector<int> makeV(vector<vector<int>>& items,int a){
        queue<int> Q;
        Q.push(items[a][1]);
        for(int i=a+1; i<n; i++){
            if(items[i][0]==items[a][0]){
                Q.push(items[i][1]);
            }
            while(!Q.empty()&& Q.size()>5)Q.pop();
        }
        int sum =0;
        while(!Q.empty()){
            sum+=Q.front();Q.pop();
        }
        return {items[a][0],sum/5};
    }

    vector<vector<int>> highFive(vector<vector<int>>& items) {
        vector<vector<int>> ans;
        sort(items.begin(),items.end());
        n= items.size();
        for(int i=0; i<n; i++){
            if(i!=0 && items[i-1][0] ==items[i][0])continue;
            vector<int> temp = makeV(items,i);
            ans.push_back(temp);
        }
        return ans;
    }
};