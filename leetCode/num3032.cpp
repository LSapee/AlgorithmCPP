class Solution {
public:
    int numberCount(int a, int b) {
        int ans =0;
        for(int i=a; i<=b; i++){
            set<int> st;
            int temp = i;
            bool ok = false;
            while(temp>0){
                if(st.find(temp%10)==st.end()){
                    st.insert(temp%10);
                    temp/=10;
                }else{
                    ok =true;
                    break;
                }
            }
            if(!ok)ans++;
        }
        return ans;
    }
};