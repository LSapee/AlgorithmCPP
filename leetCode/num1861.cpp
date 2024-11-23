class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& box) {
        int n = box.size();
        int m = box[0].size();
        vector<vector<char>> ans;
//다른 방법 생각했던 것은 처음부터 모든 아이템을 우측으로 이동 시키고 하는 방법
/*

        for(int i=0; i<n; i++){
            for(int j=m-1; j>=0; j--){
                if(box[i][j]=='#'||box[i][j]=='*')continue;
                int nxt = j-1;
                while(nxt>=0){
                    if(box[i][nxt]=='*')break;
                    if(box[i][nxt]=='#'){
                        swap(box[i][nxt],box[i][j]);
                        break;
                    }
                    nxt--;
                }

            }
        }
};  맨뒤에 bool ok가 있는 for문 제외처리
 * */
        for(int i=0; i<m; i++){
            vector<char> temp;
            for(int j=n-1; j>=0; j--){
                temp.push_back(box[j][i]);
            }
            ans.push_back(temp);
        }
        for(int i=0; i<n; i++){
            bool ok = true;
            while(ok){
                ok = false;
                for(int j=m-1; j>0; j--){
                    if(ans[j][i]=='#'||ans[j][i]=='*')continue;
                    if(ans[j-1][i]=='#'){
                        ans[j][i] = '#';
                        ans[j-1][i] = '.';
                        ok=true;
                    }
                }
            }
        }
        return ans;
    }
};

// 1. 우선 90도 회전 하도록 만들기
// 2. 맨 아래세 부터 위칸에 #가 있는지 확인하고 있다면 아래로 가져오기.