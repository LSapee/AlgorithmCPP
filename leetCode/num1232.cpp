class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        int x1,x2,y1,y2;
        x1 = coordinates[0][0];
        x2 = coordinates[1][0];
        y1 = coordinates[0][1];
        y2 = coordinates[1][1];
        int n = coordinates.size();
        for(int i=2; i<n; i++){
            int x3 = coordinates[i][0];
            int y3 = coordinates[i][1];
            if((y2-y1)*(x3-x2)!=(y3-y2)*(x2-x1))return false;
        }
        return true;
    }
};

//기울기 구하는 공식 적용 x3-x2 /y2-y1 = y3-y2/x2-x1 이면 곱셈일때도 가능할것으로 판단
