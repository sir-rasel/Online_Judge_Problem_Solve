#include <bits/stdc++.h>
using namespace std;

int sum,s1,s2,diff=1000000;

void minimumDifference(int w[],int n,int pos){
    if(pos==n){
        s1=sum-s2;
        diff=min(diff,abs(s1-s2));
        return;
    }
    minimumDifference(w,n,pos+1);
    s2+=w[pos];
    minimumDifference(w,n,pos+1);
    s2-=w[pos];
}

int main(){
    int n;
    scanf("%d",&n);
    int w[n+5];
    for(int i=0;i<n;i++){
        scanf("%d",&w[i]);
        sum+=w[i];
    }
    minimumDifference(w,n,0);
    printf("%d\n",diff);
    return 0;
}
