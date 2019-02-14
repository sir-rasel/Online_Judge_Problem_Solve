#include <bits/stdc++.h>
using namespace std;

int solve(int a[],int n,int pos){
    int res=0,temp=pos-1;
    while(temp>=0 and a[temp]<=a[temp+1]) {
        temp--;
        res++;
    }
    temp=pos+1;
    while(temp<n and a[temp]<=a[temp-1]) {
        temp++;
        res++;
    }
    return res;
}

int main(){
    int n;
    scanf("%d",&n);
    int land[n+5];
    for(int i=0;i<n;i++) scanf("%d",&land[i]);
    int res=-1;
    for(int i=0;i<n;i++) res=max(res,solve(land,n,i));
    printf("%d\n",res+1);
    return 0;
}
