class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        vector<int> ans;
        int end = matrix.size()*matrix[0].size();
        int w = -1;
        int h = 0;
        while(ans.size()<end){
            for(int i=w+1;i<matrix[h].size(); i++){
                if(matrix[h][i]==1000) break;
                ans.push_back(matrix[h][i]);
                matrix[h][i]=1000;
                w=i;
            }
            for(int i=h+1; i<matrix.size(); i++){
                if(matrix[i][w]==1000) break;
                ans.push_back(matrix[i][w]);
                matrix[i][w] =1000;
                h=i;
            }
            for(int i=w-1; i>=0; i--){
                if(matrix[h][i] ==1000) break;
                ans.push_back(matrix[h][i]);
                matrix[h][i]=1000;
                w=i;
            }
            for(int i= h-1; i>=0; i--){
                if(matrix[i][w]==1000) break;
                ans.push_back(matrix[i][w]);
                matrix[i][w] =1000;
                h=i;
            }
        }
        cout<<w<<"\n";
        cout<<h<<"\n";
        cout<<ans.size();
        return ans;
    }
};