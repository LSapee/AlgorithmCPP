class Solution {
public:
    int maxNumberOfBalloons(string text) {
        vector<int> arr(5,0);
        for(int i=0; i<text.size(); i++){
            if(text[i]=='b')arr[0]++;
            else if(text[i]=='a')arr[1]++;
            else if(text[i]=='l')arr[2]++;
            else if(text[i]=='o')arr[3]++;
            else if(text[i]=='n')arr[4]++;
        }
        arr[2]/=2;
        arr[3]/=2;
        int a =100000;
        for(int i=0; i<5; i++){
            a= min(a,arr[i]);
        }
        return a;
    }
};