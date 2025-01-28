class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        int cnt =1;
        int sum = 0;
        vector<int> ans;
        for(int i=0; i<s.size(); i++){
            if(sum+widths[s[i]-'a']<=100){
                sum+= widths[s[i]-'a'];
                if(sum==100 && i!=s.size()-1){
                    cnt++;
                    sum=0;
                }
            }else{
                cnt++;
                sum = widths[s[i]-'a'];
            }
        }
        ans.push_back(cnt);
        ans.push_back(sum);
        cout<<cnt<<" "<<sum;
        return ans;
    }
};