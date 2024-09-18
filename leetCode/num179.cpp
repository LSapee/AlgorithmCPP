class Solution {
public:
    vector<string> sArr;
    // reference to non-static member function must be called error 로 인하여 static 사용 이외에도 람다 또는 std::bild 사용하는 방법이 있음.
    static bool compare(string &a , string &b){return a+b<b+a;}
    string largestNumber(vector<int>& nums) {
        string ans ="";
        int cnt=0;
        for(int i=0; i<nums.size(); i++){
            sArr.push_back(to_string(nums[i]));
            if(nums[i]==0)cnt++;
        }
        // nums배열이 전부 0으로 가득 찬경우
        if(cnt==nums.size())return "0";
        sort(sArr.begin(),sArr.end(),compare);
        for(int i=0; i<sArr.size(); i++)ans=sArr[i]+ans;
        return ans;
    }
};