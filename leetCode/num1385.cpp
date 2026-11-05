
// 변경점 검사를 외부 함수로 적용

class Solution {
public:
    int N,M;
    bool check(vector<int>& arr,int a,int target){
        for(int i=0; i<M; i++) if(abs(a-arr[i])<=target) return 0;
        return 1;
    }

    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        N=arr1.size();
        M=arr2.size();
        int ans =0;
        for(int i=0; i<N; i++) if(check(arr2,arr1[i],d)) ans++;
        return ans;
    }
};

// class Solution {
// public:
//     int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
//         int n = arr1.size();
//         int m =arr2.size();
//         int ans = n;
//         for(int i=0; i<n; i++){
//             for(int j=0; j<m; j++){
//                 if(abs(arr1[i]-arr2[j]) <= d){
//                     ans--;
//                     break;
//                 }
//             }
//         }
//         return ans;
//     }
// };