class Solution {
public:
    bool squareIsWhite(string coordinates) {
        bool c1[8] = {false,true,false,true,false,true,false,true};
        bool c2[8] = {true,false,true,false,true,false,true,false};
        if((coordinates[0]-'a')%2==0)return c1[coordinates[1]-'0'-1];
        return c2[coordinates[1]-'0'-1];
    }
};