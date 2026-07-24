class Solution {
public:
    string itob(int a){
        string ans = "";
        while(a>0){
            string temp = to_string(a%2);
            ans+=temp;
            a/=2;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }

    string convertDateToBinary(string date) {
        int y = stoi(date.substr(0,4));
        int m = stoi(date.substr(5,2));
        int d = stoi(date.substr(8,2));
        cout<<y<<" "<<m<<" "<<d;
        return itob(y)+"-"+itob(m)+"-"+itob(d);
    }
};