class Solution {
public:
    int n;
    void runDomino(queue<int> &Q,vector<int> &vis,string &dominoes){
        unordered_map<int,int> mp;
        while(!Q.empty()){
            int cur = Q.front();Q.pop();
            char curChar = dominoes[cur];
            if(curChar == 'R'){
                if(cur+1==n ||dominoes[cur+1]!='.')continue;
                if(mp.find(cur+1)==mp.end())mp.insert({cur+1,-1});
                else mp[cur+1] =0;
            }else{
                if(cur-1<0||dominoes[cur-1]!='.')continue;
                if(mp.find(cur-1)==mp.end())mp.insert({cur-1,1});
                else mp[cur-1]= 0;
            }
        }
        for(auto cur : mp){
            if(cur.second == 0)continue;
            if(cur.second == 1){
                dominoes[cur.first] = 'L';
            }else{
                dominoes[cur.first] ='R';
            }
            Q.push(cur.first);
        }

    }

    string pushDominoes(string dominoes) {
        queue<int> Q;
        vector<int> vis(n,0);
        n = dominoes.size();
        for(int i=0; i<n; i++)if(dominoes[i]!='.')Q.push(i);
        while(!Q.empty()) runDomino(Q,vis,dominoes);
        return dominoes;
    }
};