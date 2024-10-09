class Solution {
public:
    vector<int> revers(vector<int>& temp){
        int n = temp.size();
        for(int i=0; i<n/2; i++){
            swap(temp[i],temp[n-1-i]);
        }
        for(int i=0; i<n; i++){
            if(temp[i]==0)temp[i]=1;
            else temp[i]=0;
        }
        return temp;
    }

    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        vector<vector<int>> ans;
        int n = image.size();
        for(int i=0; i<n; i++){
            vector<int> temp = revers(image[i]);
            ans.push_back(temp);
        }
        return ans;
    }
};
