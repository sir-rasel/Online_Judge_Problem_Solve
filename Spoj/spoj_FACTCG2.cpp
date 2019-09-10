#include<bits/stdc++.h>
using namespace std;

const int maxx = 1e7+5;
const int sizz = 4000;
bool mark[sizz];
vector<int>prime;

void sieve(){
    for(int i=3;i*i<sizz;i+=2)
        if(!mark[i])
            for(int j=i*i;j<sizz;j+=2*i)
                mark[j]=true;
    prime.push_back(2);
    for(int i=3;i<sizz;i+=2)
        if(!mark[i])
            prime.push_back(i);
}

vector<int> primeFactors(int n){
    vector<int>factor;
    factor.push_back(1);
    for(int i=0;prime[i]*prime[i]<=n;i++)
        if(n%prime[i]==0)
            while(n%prime[i]==0) n/=prime[i],factor.push_back(prime[i]);
    if(n!=1) factor.push_back(n);
    return factor;
}

void printFactors(int n){
    vector<int>factor = primeFactors(n);
    for(int i=0;i<factor.size();i++){
        if(i+1==factor.size()) printf("%d\n",factor[i]);
        else printf("%d x ",factor[i]);
    }
}

int main(){
    sieve();
    int n;
    while(scanf("%d",&n)!=EOF){
        printFactors(n);
    }
    return 0;
}
