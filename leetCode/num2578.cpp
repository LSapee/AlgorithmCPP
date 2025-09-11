class Solution {
public:
    int splitNum(int num) {
        vector<int> arr;
        while(num>0){
            arr.push_back(num%10);
            num/=10;
        }
        sort(arr.begin(),arr.end());
        string s="",ss="";
        int n = arr.size();
        bool t= true;
        for(int i=0; i<n; i++){
            if(t){
                s+=to_string(arr[i]);
                t= !t;
            }else{
                ss+=to_string(arr[i]);
                t= !t;
            }
        }
        return stoi(s)+stoi(ss);
    }
};