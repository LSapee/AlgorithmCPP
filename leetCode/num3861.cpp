class Solution {
public:
    int minimumIndex(vector<int>& capacity, int itemSize) {
        int temp =999;
        int index =-1;
        int n = capacity.size();
        for(int i=0; i<n; i++){
            if(capacity[i] >= itemSize){
                if(capacity[i] < temp){
                    temp= capacity[i];
                    index = i;
                }
            }
        }
        return index;
    }
};