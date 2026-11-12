class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int index = 0;
        int n = bits.size();
        while(index<n-1){
            if(bits[index] == 1)index+=2;
            else index++;
        }
        return index==n-1; 
    }
};