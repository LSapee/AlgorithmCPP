class Solution {
public:
    int cnts[2001];
    vector<int> arraysIntersection(vector<int>& arr1, vector<int>& arr2, vector<int>& arr3) {
        vector<int> temp;
        for(int i=0; i<arr1.size(); i++) cnts[arr1[i]]++;
        for(int i=0; i<arr2.size(); i++) cnts[arr2[i]]++;
        for(int i=0; i<arr3.size(); i++) {
            cnts[arr3[i]]++;
            if(cnts[arr3[i]]==3)temp.push_back(arr3[i]);
        }
        return temp;
    }
};