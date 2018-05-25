#include <bits/stdc++.h>
#define range 1000003
using namespace std;

int v[10][range];

int fn(int n){
    int mul=1;
    while(n){
        int temp=n%10;
        n/=10;
        if(temp!=0) mul*=temp;
    }
    return mul;
}

int gn(int n){
    if(n<=9) return n;
    return gn(fn(n));
}

void precal(){
    for(int i=1;i<range;i++){
        v[gn(i)][i]++;
    }
    for(int i=1;i<=9;i++){
        int counter=0;
        for(int j=1;j<range;j++){
            if(v[i][j]!=0){
                v[i][j]=++counter;
            }
            else v[i][j]=counter;
        }
    }
}

int main(){
    precal();
    int n,a,b,k;
    scanf("%d",&n);
    while(n--){
        scanf("%d %d %d",&a,&b,&k);
        printf("%d\n",v[k][b]-v[k][a-1]);
    }
    return 0;
}
