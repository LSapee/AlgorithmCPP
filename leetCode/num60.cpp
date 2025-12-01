class Solution {
public:
    int K;
    int N;
    string S;
    int cnt =0;
    bool check[10];
    void ans(string s,int a){
        if(s.size()==N){
            cnt++;
            if(cnt==K)S=s;
            return ;
        }
        for(int i=1; i<=N; i++){
            if(check[i])continue;
            check[i]=true;
            ans(s+to_string(i),a+1);
            check[i]=false;
            if(cnt==K)return ;
        }
    }

    string getPermutation(int n, int k) {
        K=k;
        N=n;
        ans("",1);
        return S;
    }
};
