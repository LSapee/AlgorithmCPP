class Solution {
public:
    //  . . . 
    bool overL(int x, int xx, int X, int XX){
        if((x<X && X<xx) ||(x>X && x<XX))return 1;
        if((x<XX && XX<xx)||(xx>X && xx<XX))return 1;
        if(x==X&& xx==XX)return 1;
        return false;
    }

    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        if(rec1 == rec2) return true;
        bool inX = overL(rec1[0],rec1[2],rec2[0],rec2[2]);
        bool inY = overL(rec1[1],rec1[3],rec2[1],rec2[3]);
        return inX&&inY;
    }
};