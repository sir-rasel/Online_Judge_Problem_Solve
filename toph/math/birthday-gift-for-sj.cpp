#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

ll arr[]={4,8,9,12,13,16,17,18,20,21,22};

ll res(ll n){
    if(n>23) return n-12;
    else{
        ll counter=0;
        for(int i=0;i<11;i++)
            if(n>=arr[i]) counter++;
        return counter;
    }
}

int main(){
    int test;
    scanf("%d",&test);
    while(test--){
        ll a,b;
        scanf("%lld %lld",&a,&b);
        printf("%lld\n",res(b)-res(a-1));
    }
    return 0;
}
