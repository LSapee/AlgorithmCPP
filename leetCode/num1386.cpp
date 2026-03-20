class Solution {
public:
    int check(vector<bool> &seats){
        if(seats[5] && seats[6])return 0;
        if(((!seats[2] &&!seats[3]) && (!seats[4]&&!seats[5])) &&((!seats[6] &&!seats[7]) && (!seats[8]&&!seats[9]))) return 2;
        if((!seats[2] &&!seats[3]) && (!seats[4]&&!seats[5])) return 1;
        if((!seats[6] &&!seats[7]) && (!seats[8]&&!seats[9])) return 1;
        if((!seats[4] &&!seats[5]) && (!seats[6]&&!seats[7])) return 1;
        return 0;
    }

    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {
        int cnt =0;
        map<int,vector<int>> mp;
        int m =reservedSeats.size();
        for(int i=0; i< m; i++){
            int a = reservedSeats[i][0];
            mp[a].push_back(reservedSeats[i][1]);
        }
        // 이미 좌석이 안 채워져서 10칸이 전부 빈경우 4명씩 2그룹 무조껀 앉을 수 있음.
        cnt+= (n-mp.size())*2;
        for(auto a:mp){
            int k = a.second.size();
            vector<bool> seats(11,false);
            for(int i=0; i<k ; i++)seats[a.second[i]] = true;
            cnt+= check(seats);
        }
        return cnt;
    }
};