#include<bits/stdc++.h>
using namespace std;

int main(){
    int num;
    scanf("%d",&num);
    long long int ans=1;
    for(int i=1;i<num;i++) ans*=2;
    printf("%lld\n",ans);
    return 0;
}
