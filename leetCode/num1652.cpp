class Solution {
public:
    int n;
    int thisNum(vector<int>& code,int st, int k){
        int sum =0;
        if(k>0){
            st++;
            for(int i=0; i<k; i++){
                sum+=code[(st+i)%n];
            }
        }else{
            st+=(n+k);
            int a = k*-1;
            for(int i=0; i<a; i++){
                sum+=code[(st+i)%n];
            }
        }
        return sum;
    }

    vector<int> decrypt(vector<int>& code, int k) {
        n =code.size();
        vector<int> ans(n,0);
        if(k==0)return ans;
        for(int i=0; i<n; i++){
            ans[i] = thisNum(code,i,k);
        }
        return ans;
    }
};