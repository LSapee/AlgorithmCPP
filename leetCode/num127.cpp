class Solution {
public:
    int N;
    vector<bool> vis;
    bool t =false;
    bool check(string &start,string &target){
        int cnt =0;
        for(int i=0; i<N; i++){
            if(start[i]!=target[i])cnt++;
            if(cnt>1)return false;
        }
        return true;
    }

    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        queue<pair<string,int>> Q;
        N =beginWord.size();
        int M = wordList.size();
        vis.assign(M,false);
        Q.push({beginWord,1});
        while(!Q.empty()){
            auto cur = Q.front(); Q.pop();
            for(int i=0; i<M; i++){
                if(vis[i])continue;
                if(!check(cur.first,wordList[i]))continue;
                if(endWord == wordList[i])return cur.second+1;
                Q.push({wordList[i],cur.second+1});
                vis[i]= true;
            }
        }
        return 0;
    }
};