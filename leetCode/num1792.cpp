class Solution {
public:
    double maxAverageRatio(vector<vector<int>>& classes, int extraStudents) {
        priority_queue<pair<double,pair<int,int>>> pq;
        int n =classes.size();
        for(auto cls : classes){
            double val1 = (double)cls[0]/(double)cls[1];
            double val2 = (double)(cls[0]+1)/(double)(cls[1]+1);
            pq.push({(val2-val1),{cls[0],cls[1]}});
        }
        while(extraStudents--){
            auto cur = pq.top(); pq.pop();
            double val = cur.first;
            int a = cur.second.first;
            int b = cur.second.second;
            a++;
            b++;
            double val1 = (double)a / (double)b ;
            double val2 = (double)(a+1)/(double)(b+1) ;
            pq.push({(val2-val1) , {a , b}}) ;
        }
        double ans =0.0;
        while(!pq.empty()){
            auto cur = pq.top(); pq.pop();
            int a = cur.second.first;
            int b = cur.second.second;
            double val = (double)a / (double)b ;
            ans += val;
        }
        return ans/(double)n;
    }
};