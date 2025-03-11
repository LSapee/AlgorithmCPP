#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<int> bandage, int health, vector<vector<int>> attacks) {
    int answer = 0;
    int maxHealth = health;
    int heeltime = bandage[0];
    int setime = bandage[1];
    int bonus = bandage[2];
    int time =0;
    for(int i=0; i<attacks.size(); i++){
        int attackTime = attacks[i][0];
        int attackPoint = attacks[i][1];
        int cnt =0;
        while(time<attackTime-1){
            time++;
            cnt++;
            health+=setime;
            if(cnt==heeltime){
                health+=bonus;
                cnt=0;
            }
        }
        time++;
        if(health>maxHealth) health=maxHealth;
        health-= attackPoint;
        if(health<=0) return -1;
        cout<<health<<" ";
    }
    return health;
}