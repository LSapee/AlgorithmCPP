class Solution {
public:
    int minimunTime(string s, string ss){
        int temp = 0;
        if(s>ss)swap(s,ss);
        // s시간 분으로 환산
        int st = stoi(s.substr(0,2))*60+stoi(s.substr(3,2));
        // ss시간 분으로 환산
        int nt = stoi(ss.substr(0,2))*60+stoi(ss.substr(3,2));
        temp = min((1440-nt)+st,nt-st);
        return temp;
    }
    int findMinDifference(vector<string>& timePoints) {
        int n = timePoints.size();
        int ans = INT_MAX;
        sort(timePoints.begin(),timePoints.end());
        for(int i=0; i<n; i++){
            int k = minimunTime(timePoints[i],timePoints[(i+1)%n]);
            if(k<ans)ans=k;
        }
        return ans;
    }
};