#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;

map<ll,bool>chk;

ll powering(ll x, ll y){
    ll temp;
    if( y == 0LL) return 1LL;
    temp = powering(x, y/2LL);
    if (y%2LL == 0LL) return temp*temp;
    else return x*temp*temp;
}

bool isPower(ll x, ll y){
    vector<ll>ans;
    bool flag=false;
    while(x>0LL){
        ll res1 = round(log(x)/log(y));
        ll temp = powering(y,res1);
        if (temp == x) {
            flag = true;
            ans.push_back(res1);
            x = 0;
            break;
        }
        else{
            if(temp<x) {
                x -= temp;
                ans.push_back(res1);
            }
            else{
                temp/=y;
                x -= temp;
                ans.push_back(--res1);
            }
        }
    }
    if(flag or x==0LL){
        for(auto it:ans) {
            if(chk.count(it)) return false;
            else chk[it]=true;
        }
        return true;
    }
    else return false;
}


int main(){
    int test;
    scanf("%d",&test);
    while(test--){
        int n;
        ll k;
        scanf("%d %lld",&n,&k);
        ll arr[n+5];
        bool zero = true;
        for(int i=0;i<n;i++) {
            scanf("%lld",&arr[i]);
            if(arr[i]) zero=false;
        }
        if(zero) printf("YES\n");
        else{
            bool flag = true;
            for(int i=0;i<n and flag;i++){
                if(arr[i]==0) continue;
                bool f = isPower(arr[i],k);
                if(!f) flag=false;
            }
            if(flag) printf("YES\n");
            else printf("NO\n");
        }
        chk.clear();
    }
    return 0;
}

