#include <bits/stdc++.h>
using namespace std;

const int MX = 10000005;
int dat[2*MX+1];
int head = MX, tail = MX;

void push_front(int x){
    dat[--head] =x;
}
void push_back(int x){
    dat[tail++] =x;
}

void pop_front(int x){
    head++;
}
void pop_back(int x){
    tail--;
}
int front(int x){
    return dat[head];
}
int back(int x){
    return dat[tail-1];
}
void test(){
    push_back(52);
    push_back(15);
    push_back(22);
}

int main(){
    test();
    return 0;
}