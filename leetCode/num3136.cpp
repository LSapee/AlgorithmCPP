class Solution {
public:
    bool isValid(string word) {
        int arr[3] = {0,0,0};
        int n =word.size();
        if(n<3)return false;
        for(int i=0; i<n; i++){
            if(word[i] >= '0' && word[i] <='9')arr[0]++;
            else if(word[i] >= 'A' && word[i] <= 'Z'){
                arr[0]++;
                if(word[i]=='A' || word[i] == 'E' || word[i] == 'I' || word[i] == 'O'||word[i]=='U')arr[1]++;
                else arr[2]++;
            }else if(word[i] >= 'a' && word[i] <= 'z'){
                arr[0]++;
                if(word[i]=='a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o'||word[i]=='u')arr[1]++;
                else arr[2]++;
            }else return false;
        }
        for(int i=0; i<3; i++)if(arr[i]==0)return false;
        return true;
    }
};