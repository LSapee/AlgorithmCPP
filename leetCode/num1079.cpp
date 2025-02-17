class Solution {
public:
    bool vis[8];
    unordered_set<string> st;
    int cnt= 0;
    void back(string tiles,int k,string s){
        if(s.size()==k){
            if(st.find(s)==st.end()){
                st.insert(s);
                cnt++;
            }
            return ;
        }
        for(int i=0; i<tiles.size(); i++){
            if(vis[i])continue;
            vis[i] =true;
            back(tiles,k,s+tiles[i]);
            vis[i]=false;
        }
    }

    int numTilePossibilities(string tiles) {
        for(int i=1;i<=tiles.size(); i++){
            back(tiles,i,"");
        }
        return cnt;
    }
};