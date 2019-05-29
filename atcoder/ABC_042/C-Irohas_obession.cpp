#include<bits/stdc++.h>
using namespace std;

bool digit[10];

bool check(int n){
    while(n){
        if(digit[n%10]) return false;
        n/=10;
    }
    return true;
}

int main(){
    int n,k;
    scanf("%d %d",&n,&k);
    for(int i=0;i<k;i++){
        int num;
        scanf("%d",&num);
        digit[num]=true;
    }
    while(true){
        if(check(n)) break;
        n++;
    }
    printf("%d\n",n);
    return 0;
}
