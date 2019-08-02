#include<bits/stdc++.h>
using namespace std;

const int maxx = 2021;

vector<int>prime;
bool check[maxx];

void sieve(){
    for(int i=4;i<maxx;i+=2) check[i]=true;
    for(int i=3;i<=45;i+=2)
        if(!check[i])
            for(int j=i*i;j<maxx;j+=2*i)
                check[j]=true;

    int temp=2;
    for(int i=3;i<maxx;i+=2)
        if(!check[i]){
            int t = temp+i+1;
            if(!check[t])   prime.push_back(t);
            temp=i;
        }
}

int main(){
    sieve();
    int n,k;
    scanf("%d %d",&n,&k);
    int ans=0;
    for(int i=0;n>=prime[i];i++) ans++;
    if(ans>=k) printf("YES\n");
    else printf("NO\n");
    return 0;
}
