class Solution {
public:
    // N*M의 시간 복잡도.
    string makeNum(string s,int num, int k){
        string temp = "";
        int ten = 0;
        for(int i=s.size()-1; i>=0; i--){
            int cur = s[i]-'0';
            int a = cur*num+ten;
            temp+= to_string(a%10);
            ten = a/10;
        }
        if(ten>0)temp+=to_string(ten);
        reverse(temp.begin(),temp.end());
        for(int i=0; i<k; i++)temp+="0";
        return temp;
    }
    //배열 더하기 할 때 자리수가 다르면 문제가 있기에 자리수 통일을 위해 젤 큰수랑 같은 길이로 만들기
    void makeAllSameSize(vector<string> &arr){
        int n = arr[arr.size()-1].size();
        for(int i=0; i<arr.size(); i++) while(arr[i].size()<n) arr[i] = "0"+arr[i];
    }
    //전부 더하기
    string addAll(vector<string> &arr){
        int n = arr.size();
        int m = arr[0].size();
        string ans = "";
        int sum =0;
        for(int i= m-1; i>=0; i--){
            for(int j=0; j<n; j++){
                sum+= arr[j][i]-'0';
            }
            ans += to_string(sum%10);
            sum =sum/10;
        }
        while(sum>0){
            ans += to_string(sum%10);
            sum =sum/10;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
    string multiply(string num1, string num2) {
        if(num1[0]=='0'||num2[0]=='0')return "0";
        vector<string> arr;
        int st = 0;
        for(int i=num1.size()-1; i>=0; i--){
            string num = makeNum(num2,num1[i]-'0',st++);
            arr.push_back(num);
        }
        makeAllSameSize(arr);
        string ans = addAll(arr);
        return ans;
    }
};