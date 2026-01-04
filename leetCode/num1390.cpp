class Solution {
public:
    vector<bool> arr;
    void findPrime(){
        arr.resize(100005,false);
        arr[0]= true;
        arr[1] =true;
        for(int i=2; i*i<=100002; i++){
            if(arr[i])continue;
            for(int j=2; j*i<=100002; j++){
                arr[i*j]=true;
            }
        }
    }
    vector<int> check(int target){
        vector<int> k;
        vector<int> p;
        unordered_set<int> st;
        for(int i=2; i<=target/2; i++){
            if(target%i==0){
                if(target/i == i){
                    if(st.find(i)==st.end()){
                        k.push_back(i);
                        st.insert(i);
                    }
                }else {
                    if(st.find(i)==st.end()){
                        k.push_back(i);
                        st.insert(i);
                    }
                    if(st.find(target/i)==st.end()){
                        k.push_back(target/i);
                        st.insert(target/i);
                    }
                }
            }
            if(k.size()>2)return p;
        }
        if(k.size()!=2)return p;
        return k;
    }

    int sumFourDivisors(vector<int>& nums) {
        int n =nums.size();
        findPrime();
        int ans =0;
        for(int i=0;i<n; i++){
            vector<int> temp = check(nums[i]);
            if(temp.size()==0)continue;
            else{
                for(int j=0; j<2; j++)ans+=temp[j];

                ans++;
                ans+=nums[i];
            }
        }
        return ans;
    }
};