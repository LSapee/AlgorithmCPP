class Solution {
public:
    void swapT(vector<int> &arr){
        for(int i=0; i<arr.size(); i++){
            int k =arr[i];
            int cur = -1;
            for(int j =i+1; j<arr.size(); j++){
                if(arr[j]>=k){
                    if(arr[j]==k && cur==-1)continue;
                    k=arr[j];
                    cur = j;
                }
            }
            if(cur!=-1){
                swap(arr[i],arr[cur]);
                break;
            }
        }
    }

    int maximumSwap(int num) {
        stack<int> stk;
        if(num<=10)return num;
        while(num>0){
            stk.push(num%10);
            num/=10;
        }
        int n =stk.size();
        vector<int> arr(n,0);
        for(int i=0; i<n; i++){
            if(!stk.empty())arr[i]= stk.top();stk.pop();
        }
        swapT(arr);
        int ans =0;
        for(int i=0; i<arr.size(); i++){
            ans+=arr[i];
            if(i==arr.size()-1)break;
            ans*=10;
        }
        return ans;
    }
};