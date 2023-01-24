#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        int a,k;
        cin>>a>>k;
        vector<int> arr;
        vector<int> ans;
        for(int j=0; j<a; j++){
            int z;
            cin>>z;
            arr.push_back(z);
        }
        sort(arr.begin(),arr.end());
        int left =0;
        int right=a-1;
        int sum =0;
        int zz =0;
        while(left<right){
            if(arr[left]+arr[right] == k){
                sum++;
                left++;
                right--;
            }else if(arr[left]+arr[right]>k){
                zz=k-(arr[left]+arr[right]);
                ans.push_back(abs(zz));
                right--;
            }else if(arr[left]+arr[right]<k){
                zz=k-(arr[left]+arr[right]);
                ans.push_back(abs(zz));
                left++;
            }
        }
//        for(int as=0; as<ans.size(); as++){
//            cout<<ans[as]<<" ";
//        }
        if(sum>0){
            cout<<sum<<"\n";
        }else{
            sort(ans.begin(),ans.end());
            sum=1;
            int big = ans[0];
            for(int j=1; j<ans.size(); j++){
                if(ans[j]==big){
                    sum++;
                }else{
                    break;
                }
            }
            cout<<sum<<"\n";
        }
    }
}