class Solution {
public:
    bool isT(queue<int> Q, vector<int>& arr, int m, int k){
        vector<int> B;
        while(!Q.empty()){
            B.push_back(Q.front());Q.pop();
        }
        for(int i=1; i<k; i++){
            for(int j=0; j<m; j++)B.push_back(B[j]);
        }
        for(int i=0; i<arr.size(); i++){
            bool a= false;
            for(int j=0; j<B.size(); j++){
                if(i+j >=arr.size()){
                    a=true;
                    break;
                }
                if(arr[i+j] == B[j])continue;
                else {
                    a =true; 
                    break;
                }
            }
            if(!a)return 1;
        }
        return 0;
    }
    bool containsPattern(vector<int>& arr, int m, int k) {
        int n = arr.size();
        queue<int> Q;
        bool temp = false;
        for(int i=0; i<n; i++){
            Q.push(arr[i]);
            if(Q.size() == m){
                temp = isT(Q,arr,m,k);
                Q.pop();
                if(temp)return true;
            }
        }
        return false;
    }
};