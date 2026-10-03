class Solution {
public:
    int dx[4] ={0,1,0,-1};
    int dy[4] ={1,0,-1,0};

    int findRoot(vector<int> &P,int target){
        if(P[target] ==target)return target;
        return P[target]= findRoot(P,P[target]);
    }

    vector<int> numIslands2(int m, int n, vector<vector<int>>& positions) {
        vector<vector<int>> arr(m,vector<int>(n,-1)); //
        vector<int> ans;
        int cnt =0;
        int landNum =1;
        int K = positions.size();
        vector<int> P(K+1,-1);
        for(int i=0; i<K; i++){
            int x = positions[i][0];
            int y = positions[i][1];
            // 이건 아래서 꺼내놨고.
            if(arr[x][y]!=-1){
                ans.push_back(cnt);
                continue;
            }
            arr[x][y]= landNum;
            P[landNum] =landNum;
            cnt++;
            for(int j=0; j<4; j++){
                int nx = x+dx[j];
                int ny = y+dy[j];
                if(nx<0 ||nx>=m ||ny<0||ny>=n)continue;
                //이게 유니온 파인드 핵심인듯.
                if(arr[x+dx[j]][y+dy[j]]!=-1){
                    int root = findRoot(P,landNum);
                    int adjRoot = findRoot(P,arr[nx][ny]);
                    // 근간이 다르면
                    if(root!=adjRoot){
                        P[root]=adjRoot;
                        cnt--;
                    }
                }
            }
            ans.push_back(cnt);
            landNum++;
        }
        return ans;
    }
};


// 섬끼리 묶어보려고 시도.
// class Solution {
// public:
//     int dx[4] ={0,1,0,-1};
//     int dy[4] ={1,0,-1,0};
//     int N,M;
//
//     vector<int> numIslands2(int m, int n, vector<vector<int>>& positions) {
//         vector<vector<int>> arr(m,vector<int>(n,-1)); //
//         vector<int> ans;
//         int cnt =0;
//         int landNum =1;
//         N=n;
//         M=m;
//         int K = positions.size();
//         vector<int> P(K+1,-1);
//         for(int i=0; i<K; i++){
//             int x = positions[i][0];
//             int y = positions[i][1];
//             if(i ==0 ){
//                 // 첫섬.
//                 arr[x][y] = landNum;
//                 cnt++;
//                 ans.push_back(cnt);
//                 P[landNum]=landNum;
//             }else{
//                 set<int> st;
//                 for(int j=0; j<4; j++){
//                     if(x+dx[j]<0 ||x+dx[j]>=m ||y+dy[j]<0||y+dy[j]>=n)continue;
//                     if(arr[x+dx[j]][y+dy[j]]!=-1)st.insert(arr[x+dx[j]][y+dy[j]]);
//                 }
//                 if(st.size()==0){
//                     if(arr[x][y]!=-1){
//                         ans.push_back(cnt);
//                         continue;
//                     }
//                     arr[x][y] = landNum;
//                     P[landNum] = landNum;
//                     cnt++;
//                     ans.push_back(cnt);
//                 }else if(st.size()==1){
//                     arr[x][y] = *st.begin();
//                     ans.push_back(cnt);
//                 }else{
//                     unordered_set<int> temp;
//                     for(int A: st){
//                         temp.insert(P[A]);
//                         P[A]= *st.begin();
//                     }
//                     cnt -= (temp.size()-1);
//                     ans.push_back(cnt);
//                 }
//             }
//             landNum++;
//         }
//         return ans;
//     }
// };

// class Solution {
// public:
//     int dx[4] ={0,1,0,-1};
//     int dy[4] ={1,0,-1,0};
//     int N,M;
//     void addlands(unordered_set<int> &st,vector<vector<int>>& arr,int x,int y){
//         int setLandNum = *st.begin();
//         queue<pair<int,int>> Q;
//         arr[x][y] = setLandNum;
//         Q.push({x,y});
//         while(!Q.empty()){
//             auto cur = Q.front(); Q.pop();
//             for(int i=0; i<4; i++){
//                 int curX = cur.first+dx[i];
//                 int curY = cur.second+dy[i];
//                 if(curX<0||curX>=M||curY<0||curY>=N)continue;
//                 if(arr[curX][curY]==setLandNum||  st.find(arr[curX][curY])==st.end())continue;
//                 arr[curX][curY]= setLandNum;
//                 Q.push({curX,curY});
//             }
//         }
//
//     }
//
//     vector<int> numIslands2(int m, int n, vector<vector<int>>& positions) {
//         vector<vector<int>> arr(m,vector<int>(n,-1)); //
//         vector<int> ans;
//         int cnt =0;
//         int landNum =1;
//         N=n;
//         M=m;
//         int N = positions.size();
//         for(int i=0; i<N; i++){
//             int x = positions[i][0];
//             int y = positions[i][1];
//             if(i ==0 ){
//                 // 첫섬.
//                 arr[x][y] = landNum;
//                 cnt++;
//                 ans.push_back(cnt);
//             }else{
//                 unordered_set<int> st;
//                 for(int j=0; j<4; j++){
//                     if(x+dx[j]<0 ||x+dx[j]>=m ||y+dy[j]<0||y+dy[j]>=n)continue;
//                     if(arr[x+dx[j]][y+dy[j]]!=-1)st.insert(arr[x+dx[j]][y+dy[j]]);
//                 }
//                 if(st.size()==0){
//                     if(arr[x][y]!=-1){
//                         ans.push_back(cnt);
//                         continue;
//                     }
//                     arr[x][y] = landNum;
//                     cnt++;
//                     ans.push_back(cnt);
//                 }else if(st.size()==1){
//                     arr[x][y] = *st.begin();
//                     ans.push_back(cnt);
//                 }else{
//                     addlands(st,arr,x,y);
//                     cnt -= (st.size()-1);
//                     ans.push_back(cnt);
//                 }
//             }
//             landNum++;
//         }
//         return ans;
//     }
// };