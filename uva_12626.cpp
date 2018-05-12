#include <iostream>
#include <stdio.h>
#include <algorithm>

using namespace std;

int minimum(int a,int b,int c,int d,int e,int f);

int main(){
    int test,temp;
    int m,a,r,g,i,t;
    char str;
    cin>>test;
    getchar();
    while(test--){
        m=a=r=g=i=t=0;
        while( scanf("%c",&str) && str!='\n' ){
            if(str=='A') a++;
            else if(str=='M') m++;
            else if(str=='R') r++;
            else if(str=='G') g++;
            else if(str=='I') i++;
            else if(str=='T') t++;
        }
        temp=minimum(a,m,r,g,i,t);
        cout<<temp<<endl;
    }
    return 0;
}

int minimum(int a,int b,int c,int d,int e,int f){
    int small=700;
    small=min(small,a/3);
    small=min(small,b/1);
    small=min(small,c/2);
    small=min(small,d/1);
    small=min(small,e/1);
    small=min(small,f/1);
    return small;
}
