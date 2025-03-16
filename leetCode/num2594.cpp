class Solution {
public:
    long long repairCars(vector<int>& ranks, int cars) {
        int minRank = ranks[0],maxRank=ranks[0];
        for(int a : ranks){
            if(a<minRank)minRank= a;
            if(a>maxRank)maxRank= a;
        }
        vector<int> arr(maxRank+1);
        for(int a: ranks){
            if(a<minRank) minRank = a;
            arr[a]++;
        }
        long long st = 1, ed=1LL *minRank*cars*cars;
        while(st<ed){
            long long mid = (st+ed)/2;
            long long K =0;
            for(int i=1; i<=maxRank; i++){
                K+=arr[i]*(long long)sqrt(mid/(long long)i);
            }
            if(K>=cars){
                ed= mid;
            }else{
                st = mid+1;
            }
        }
        return st;
    }
};