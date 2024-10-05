class Solution {
public:
    bool checkPerfectNumber(int num) {
        int n =num/2;
        if(num==1)return false;
        vector<int> arr(1,1);
        for(int i=2; i<=n; i++)if(num%i==0)arr.push_back(i);
        int sum =0;
        for(auto a :arr)sum+=a;
        if(sum==num)return true;
        else return false;
    }
};