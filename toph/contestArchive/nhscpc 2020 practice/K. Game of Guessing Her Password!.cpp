#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long int ll;
typedef pair<int,int> pii;

const int mod = 1e9+7;
const int Max = 1000;
const ll limit = 1e9;
const double eps = 1e-4;

bool mark[Max];
vector<int>prime;
map<int,ll>segment;

vector<ll> power2 = {2,4,8,16,32,64,128,256,512,1024};
vector<ll> power3 = {3,9,27,81,243,729};
vector<ll> power5 = {5,25,125,625};
vector<ll> power7 = {7,49,343};

ll t;

ll binarySearch(ll ans,ll l,ll h,ll factor,vector<ll> power){
    ll temp = (ans/factor);
    int pos=0;
    while(l<=h){
        ll mid = l+(h-l)/2;

        printf("? %lld\n",temp*power[mid]);
        fflush(stdout);
        scanf("%lld",&t);

        if(t == temp*power[mid]){
            l = mid+1;
            pos = mid;
        }
        else
            h = mid-1;
    }
    return temp*power[pos];
}

void sieve(){
    for(int i=4;i<Max;i+=2) mark[i]=true;
    for(int i=3;i*i<=Max;i+=2)
        if(!mark[i])
            for(int j=i*i;j<Max;j+=2*i)
                mark[j]=true;

    for(ll i=2;i<Max;i++)
        if(!mark[i])
            prime.push_back(i);
}

void segmentGenerate(){
    sieve();
    int i = 0;
    while(i<prime.size()){
        ll res = 1;
        int j = prime[i];
        for(i;i<prime.size() and res*prime[i]<=limit;i++)
            res*=prime[i];
        if(res!=1) segment[j]= res;
    }
}

vector<int>factorize(ll n){
    vector<int>factor;
    for(int i=0;prime[i]*prime[i]<=n;i++){
        if(n%prime[i]==0){
            factor.push_back(prime[i]);
            while(n%prime[i]==0) n/=prime[i];
        }
    }

    if(n>1) factor.push_back(n);

    return factor;
}

int main(){
    segmentGenerate();
    int test;
    scanf("%d",&test);
    while(test--){
        ll ans = 1;
        for(auto it=segment.begin();it!=segment.end();it++){
            if((ans*(ll)it->first) > (ll)Max) break;
            printf("? %lld\n",it->second);
            fflush(stdout);
            scanf("%lld",&t);
            ans *= t;
        }

        vector<int>factor = factorize(ans);

        for(int i=0;i<factor.size();i++){
            if(factor[i] == 2) ans = binarySearch(ans,0,9,factor[i],power2);
            else if(factor[i] == 3) ans = binarySearch(ans,0,5,factor[i],power3);
            else if(factor[i] == 5) ans = binarySearch(ans,0,3,factor[i],power5);
            else if(factor[i] == 7) ans = binarySearch(ans,0,2,factor[i],power7);
            else{
                ll temp = ans/factor[i];
                temp*=(factor[i]*factor[i]);
                printf("? %lld\n",temp);
                fflush(stdout);
                scanf("%lld",&t);

                if(t == temp) ans = temp;
            }
        }
        printf("! %lld\n",ans);
        fflush(stdout);
    }
    return 0;
}
