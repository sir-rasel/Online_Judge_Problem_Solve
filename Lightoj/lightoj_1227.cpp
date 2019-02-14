#include <bits/stdc++.h>
using namespace std;

int main(){
    int test;
    scanf("%d",&test);
    for(int i=1;i<=test;i++){
        int n,p,q;
        scanf("%d %d %d",&n,&p,&q);
        int egg,sum=0,count=0;
        for(int j=0;j<n;j++){
            scanf("%d",&egg);
            if(egg+sum<=q and count+1<=p){
                sum+=egg;
                count++;
            }
        }
        printf("Case %d: %d\n",i,count);
    }
    return 0;
}
