class Solution {
public:
    int openLock(vector<string>& deadends, string target) {
        queue<string> Q;
        // 잠기는 배열 정렬
        unordered_set<string> hash(deadends.begin(),deadends.end());
        // 한번 사용한 비밀번호
        unordered_set<string> vis;
        // 처음부터 0000 번호를 움직일 수 없다면 변경 못하니 -1를 리턴
        if(hash.find("0000")!=hash.end()) return -1;

        // 깊이 답
        int depth = 0;
        //시작 0000추가
        Q.push("0000");
        vis.insert("0000");
        while(!Q.empty()){
            //현재 Q의 길이 현재 depth에 있는 node의 갯수를 파악하기 위해서
            int siz = Q.size();
            for(int i=0; i<siz; i++){
                // Q의 마지막 가져오기
                string s = Q.front(); Q.pop();
                // 가져온 string이 target이면 현제 깊이 반환
                if(s==target) return depth;
                //자물쇠는 4자리
                for(int j=0; j<4; j++){
                    //j번째 번호
                    char temp = s[j];
                    // temp가 9면 0으로 만들고 그 외에는 +1씩
                    s[j] = temp == '9'?'0' : temp+1;
                    //잠기는배열에 존재하지 않고 // 이미 사용하지 않은 배열인 경우 Q에 추가
                    if(hash.find(s)==hash.end()&& vis.find(s)==hash.end()){
                        Q.push(s);
                        vis.insert(s);
                    }
                    s[j] = temp == '0'?'9' : temp-1;
                    //잠기는배열에 존재하지 않고 // 이미 사용하지 않은 배열인 경우 Q에 추가
                    if(hash.find(s)==hash.end()&& vis.find(s)==hash.end()){
                        Q.push(s);
                        vis.insert(s);
                    }
                    s[j] = temp;
                }
            }
            depth++;
        }
        return -1;
    }
};