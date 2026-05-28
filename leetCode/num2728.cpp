/**
 * Definition for a street.
 * class Street {
 * public:
 *     Street(vector<int> doors);
 *     void openDoor();
 *     void closeDoor();
 *     bool isDoorOpen();
 *     void moveRight();
 *     void moveLeft();
 * };
 */
class Solution {
public:
    int houseCount(Street* street, int k) {
        for(int i=0; i<k; i++){
            street->closeDoor();
            street->moveLeft();
        }
        street->openDoor();
        int ans =1;
        for(street->moveLeft(); !street->isDoorOpen(); street->moveLeft(), ans++);
        return ans;
    }
};