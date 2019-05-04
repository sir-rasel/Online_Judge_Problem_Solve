#include <bits/stdc++.h>
#define Max 1000006
using namespace std;

int phi[Max];
bool mark[Max];
vector<int>coprime[Max];

void Euler_Sieve_phi(){
    for(int i=1;i<Max;i++) phi[i]=i;
    mark[1]=true;

    for(int i=2;i<Max;i++){
        if(!mark[i]){
            for(int j=i;j<Max;j+=i){
                mark[j]=true;
                phi[j]=phi[j]/i*(i-1);
            }
        }
    }
    for(int i=0;i<Max;i++){
        coprime[phi[i]].push_back(i);
    }
}

int main(){
    Euler_Sieve_phi();
    int n,q;
    scanf("%d %d",&n,&q);
    while(q--){
        int l,r,x;
        scanf("%d %d %d",&l,&r,&x);
        if(l>r) swap(l,r);
        vector<int>::iterator it = lower_bound(coprime[x].begin(),coprime[x].end(),l);
        int counter=0;
        while(true){
            if(it==coprime[x].end() or *it>r) break;
            counter++;
            it++;
        }
        printf("%d\n",counter);
    }
    return 0;
}
