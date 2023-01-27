//
// Created on 2022/11/02.
//
#include <iostream>
#include <string>
using namespace std;

int main(){

    string ss;
    cin>>ss;
    int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0,k=0,l=0,m=0,n=0,o=0,p=0,q=0,r=0,s=0,t=0,u=0,v=0,w=0,x=0,y=0,z=0;
    for(int ax =0; ax<ss.length(); ++ax){
        if(ss[ax] == 97){
            a++;
        }else if(ss[ax] == 98){
            b++;
        }else if(ss[ax] == 99){
            c++;
        }else if(ss[ax] == 100){
            d++;
        }else if(ss[ax] == 101){
            e++;
        }else if(ss[ax] == 102){
            f++;
        }else if(ss[ax] == 103){
            g++;
        }else if(ss[ax] == 104){
            h++;
        }else if(ss[ax] == 105){
            i++;
        }else if(ss[ax] == 106){
            j++;
        }else if(ss[ax] == 107){
            k++;
        }else if(ss[ax] == 108){
            l++;
        }else if(ss[ax] == 109){
            m++;
        }else if(ss[ax] == 110){
            n++;
        }else if(ss[ax] == 111){
            o++;
        }else if(ss[ax] == 112){
            p++;
        }else if(ss[ax] == 113){
            q++;
        }else if(ss[ax] == 114){
            r++;
        }else if(ss[ax] == 115){
            s++;
        }else if(ss[ax] == 116){
            t++;
        }else if(ss[ax] == 117){
            u++;
        }else if(ss[ax] == 118){
            v++;
        }else if(ss[ax] == 119){
            w++;
        }else if(ss[ax] == 120){
            x++;
        }else if(ss[ax] == 121){
            y++;
        }else if(ss[ax] == 122){
            z++;
        }
    }
    printf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z);
    return 0;

}