#include <bits/stdc++.h>
#define Max 100000
using namespace std;

int a[1000000];
int maximum[1000000],large;

void precalculate(){
    a[1]=maximum[1]=large=1;
    for(int i=1;i<1000000/2;i++){
        a[i*2]=a[i];
        a[i*2+1]=a[i]+a[i+1];
        if(a[i]>large) large = a[i];
        maximum[i]=large;
    }
}


int main(){
    precalculate();
    int number;
    while(scanf("%d",&number) and number!=0){
        printf("%d\n",maximum[number]);
    }
    return 0;
}
