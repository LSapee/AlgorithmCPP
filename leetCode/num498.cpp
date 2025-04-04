class Solution {
public:
    vector<int> ans;
    void addAns(vector<int> temp,int k){
        if(k==1)for(int i=temp.size()-1; i>=0; i--)ans.push_back(temp[i]);
        else for(int i=0; i<temp.size(); i++)ans.push_back(temp[i]);
    }

    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {

        if(mat.size() == 0) return ans;
        int n = mat.size();
        int m = mat[0].size();
        int k = 0;
        for(int i=0; i<n+m-1; i++){
            int r = i<m? 0:i-m+1;
            int c = i<m? i:m-1;
            vector<int> temp;
            while(r<n&&c>-1){
                temp.push_back(mat[r][c]);
                r++;
                c--;
            }
            if(i%2==0){
                addAns(temp,1);
            }else{
                addAns(temp,0);
            }
        }
        return ans;
    }
};