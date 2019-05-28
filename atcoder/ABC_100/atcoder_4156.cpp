#include<bits/stdc++.h>
using namespace std;

int counting(int n){
    int res=0;
    while(n%2==0){
        res++;
        n/=2;
    }
    return res;
}

int main(){
    int n;
    scanf("%d",&n);
    int res=0;
    for(int i=0;i<n;i++){
        int num;
        scanf("%d",&num);
        if(num%2==0) res+=counting(num);
    }
    printf("%d\n",res);
    return 0;
}
