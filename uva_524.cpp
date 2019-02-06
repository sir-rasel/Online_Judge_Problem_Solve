#include<bits/stdc++.h>
#define MAX 50
using namespace std;

int len;
bool taken[20];
vector<int>perm;
map<int,bool>prime;

void gen(){
    if(perm.size()==len){
        if(!prime[perm[perm.size()-1]+1]) return;
        printf("1");
        for(int i=1;i<perm.size();i++) printf(" %d",perm[i]);
        printf("\n");
        return;
    }
    for(int i=2;i<=len;i++){
        if(!taken[i]){
            if(prime[i+perm[perm.size()-1]]){
                taken[i]=true;
                perm.push_back(i);
                gen();
                perm.pop_back();
                taken[i]=false;
            }
        }
    }
}

void sieve(){
    for(int i=2;i<=MAX;i++) prime[i]=true;
    int k=sqrt(MAX);
    for(int i=2;i<=k;i++)
        if(prime[i]==true)
            for(int j=i*i;j<=MAX;j+=i) prime[j]=false;
}

int main(){
    sieve();
    int cs = 0;
    while(cin>>len){
        perm.clear();
        memset(taken,false,sizeof(taken));
        perm.push_back(1);
        if(cs) printf("\n");
        printf("Case %d:\n",++cs);
        gen();
    }
    return 0;
}
