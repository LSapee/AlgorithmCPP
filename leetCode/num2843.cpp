class Solution {
public:
    bool check(int k){
        if(k<100){
            if(k%10==k/10)return true;
            else return false;
        }
        int f=k/100,d=k%100;
        return (f%10)+(f/10)==(d%10)+(d/10);
    }

    int countSymmetricIntegers(int low, int high) {
        int ans =0;
        for(int i=low; i<=high; i++){
            if(i<10||(i>99&&i<1000)||i==10000)continue;
            if(check(i))ans++;
        }
        return ans;
    }
};