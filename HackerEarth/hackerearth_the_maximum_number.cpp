#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

ll ncr[40][40];

void ncr_calculate(){
    ncr[0][0]=1;
    for(int i=1;i<32;i++){
        for(int j=0;j<32;j++){
            if(j>i) ncr[i][j]=0;
            else if(j==i or j==0) ncr[i][j]=1;
            else ncr[i][j] = ncr[i-1][j]+ncr[i-1][j-1];
        }
    }
}

int bit(ll n){
    int counter=0;
    while(n){
        n/=2;
        counter++;
    }
    return counter;
}

int main(){
    ncr_calculate();
    int test;
    scanf("%d",&test);
    while(test--){
        int n,l;
        scanf("%d %d",&n,&l);

        ll orr=0;
        vector<ll>arr(n);
        for(int i=0;i<n;i++){
            scanf("%lld",&arr[i]);
            orr|=arr[i];
        }

        int b = bit(orr);
        if(b<l) printf("-1\n");
        else{
            vector<ll>res;
            for(int i=0;i<b;i++){
                ll sum=0;
                for(int j=0;j<n;j++)
                    if( (arr[j] & (1LL<<i) )>0 )
                        sum+=(1LL<<i);
                if(sum != 0) res.push_back(sum);
            }
            sort(res.begin(),res.end());

            if((int)res.size()<l) {
                printf("-1\n");
                continue;
            }

            ll ans;
            ll num = res[(int)res.size()-l];

            auto s = lower_bound(res.begin(),res.end(),num);
            auto e = --upper_bound(res.begin(),res.end(),num);
            int total = e-s+1,remain = res.end()-e-1;

            ans = ncr[total][l-remain];

            printf("%lld\n",ans);
        }
    }
    return 0;
}
