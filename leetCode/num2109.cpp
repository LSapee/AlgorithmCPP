class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        int st =0;
        string ans ="";
        for(int i=0; i<spaces.size(); i++){
            ans+= s.substr(st,spaces[i]-st);
            ans+=" ";
            st = spaces[i];
        }
        ans+= s.substr(st,s.size()-st);
        return ans;
    }
};

//단순하게 해당 spaces위치에 공백추가 -> 통과
//substr함수 이용해서 해당 위치 전까지의 문장 + " " + 다음 위치의 문장으로 처리 -> 통과
// insert를 이용한 방식 -> s.length가 300000 까지 + sapaces.length가 300000까지 극한으로 다 넣게된다면 1칸 미룰때마다 299,999 -> 299,998 ->299,997 ... 1번까지 작업하기에 시간초과