class Solution {
public:
    char arr[1001][1001];
    string convert(string s, int numRows) {
        int st =0;
        int ed = s.size();
        int x = 0;
        int y = 0;
        if(numRows==1)return s;
        while(st<ed){
            for(x; x<numRows; x++){
                if(st>=ed)break;
                arr[x][y] = s[st];
                st++;
            }
            int k = y+numRows;
            y++;
            x-=2;
            for(y; y<k-1; y++){
                if(st>=ed)break;
                arr[x][y] = s[st];
                x--;
                st++;
            }
        }
        string ss = "";
        for(int i=0; i<ed; i++){
            for(int j=0; j<y; j++){
                if(arr[i][j]!='\0')ss+=arr[i][j];
            }
        }
        return ss;
    }
};