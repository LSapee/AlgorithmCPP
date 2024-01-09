#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int ah1,am1,as1,ah2,am2,as2,
    bh1,bm1,bs1,bh2,bm2,bs2,
    ch1,cm1,cs1,ch2,cm2,cs2;

    cin>> ah1>>am1>>as1>>ah2>>am2>>as2>>bh1>>bm1>>bs1>>bh2>>bm2>>bs2>>ch1>>cm1>>cs1>>ch2>>cm2>>cs2;
    int as = as2-as1;
    int am = am2-am1;
    int ah = ah2-ah1;
    int bs = bs2-bs1;
    int bm = bm2-bm1;
    int bh = bh2-bh1;
    int cs = cs2-cs1;
    int cm = cm2-cm1;
    int ch = ch2-ch1;

    if(as<0){
        as = as+60;
        am--;
    }
    if(am<0){
        am = am+60;
        ah--;
    }
    if(bs<0){
        bs = bs+60;
        bm--;
    }
    if(bm<0){
        bm = bm+60;
        bh--;
    }
    if(cs<0){
        cs = cs+60;
        cm--;
    }
    if(cm<0){
        cm = cm+60;
        ch--;
    }
    cout<<ah<<" "<<am<<" "<<as<<"\n";
    cout<<bh<<" "<<bm<<" "<<bs<<"\n";
    cout<<ch<<" "<<cm<<" "<<cs<<"\n";
}
