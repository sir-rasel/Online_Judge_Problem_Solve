#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;


ll sumOfDigit(ll n){
    ll res = 0;
    while (n > 0){
        res += n % 10;
        n /= 10;
    }
    return res;
}

double fraction(ll n){
    return (double)(n) / sumOfDigit(n);
}

vector<ll>res;

void precal(){
    ll base = 1;
    map<ll,bool>check;
    for(int i=0;i<15;i++){
        for(int j=1;j<150;j++){
            ll snuke = (base*(j+1))-1;
            if(check.count(snuke)==0){
                res.push_back(snuke);
                check[snuke]=true;
            }
        }
        base*=10;
    }

    for(int i=0;i<res.size();i++){
        for(int j=i+1;j<res.size();j++){
            if (fraction(res[i]) > fraction(res[j])){
                res.erase(res.begin() + i--);
                break;
            }
        }
    }
}

int main(){
    precal();
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++) printf("%lld\n",res[i]);
    return 0;
}
