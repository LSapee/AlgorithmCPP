class Solution {
public:
    int tripletCount(vector<int>& a, vector<int>& b, vector<int>& c) {
        int ans =0;
        for(int i=0; i<a.size(); i++){
            for(int j=0; j<b.size(); j++){
                for(int k=0; k<c.size(); k++){
                    int temp = a[i]^b[j]^c[k];
                    int cnt =0;
                    while(temp>0){
                        cnt+=temp%2;
                        temp/=2;
                    }
                    if(cnt%2==0)ans++;
                }
            }    
        }
        return ans;
    }
};