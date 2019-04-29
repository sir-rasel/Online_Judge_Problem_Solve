#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    scanf("%d",&n);
    n=(n*(n+1))/2;
    scanf("%d",&m);
    while(m--){
        int num;
        scanf("%d",&num);
        n-=num;
    }
    printf("%d\n",n);
    return 0;
}
