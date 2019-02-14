#include<bits/stdc++.h>
using namespace std;

int main(){
    int test;
    scanf("%d",&test);
    for(int i=1;i<=test;i++){
        int n,totalDust=0;
        scanf("\n%d",&n);
        for(int j=0;j<n;j++){
            int num;
            scanf("%d",&num);
            if(num>0) totalDust+=num;
        }
        printf("Case %d: %d\n",i,totalDust);
    }
    return 0;
}
