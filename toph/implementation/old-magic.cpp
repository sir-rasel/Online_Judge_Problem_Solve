#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    int n;
    scanf("%d",&n);
    pair<string,ll>command[n];
    for(int i=0;i<n;i++) cin>>command[i].first>>command[i].second;
    ll x;
    scanf("%lld",&x);
    for(int i=n-1;i>=0;i--){
        if(command[i].first=="add") x-=command[i].second;
        else if(command[i].first=="subtract") x+=command[i].second;
        else if(command[i].first=="multiply") x/=command[i].second;
        else if(command[i].first=="divide") x*=command[i].second;
    }
    printf("%lld\n",x);
    return 0;
}
