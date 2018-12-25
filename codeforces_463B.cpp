#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    scanf("%d",&n);
    int game[n+5];
    game[0]=0;
    for(int i=1;i<=n;i++) scanf("%d",&game[i]);
    int sum=0,taka=0;
    for(int i=1;i<=n;i++){
        sum+=(game[i-1]-game[i]);
        if(sum<0) taka+=(-1)*sum,sum=0;
    }
    printf("%d\n",taka);
    return 0;
}
