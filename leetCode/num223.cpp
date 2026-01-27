class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        int arA = abs(ax2-ax1) * abs(ay2-ay1);
        int brA = abs(bx2-bx1) * abs(by2-by1);
        if(arA ==0) return brA;
        if(brA==0)return arA;
        int cx = min(ax2,bx2)-max(ax1,bx1);
        int cy = min(by2,ay2)-max(ay1,by1);
        int crA = 0;
        if(cx>0&& cy>0)crA = cx*cy;
        return arA+brA-crA;
    }
};