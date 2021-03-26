#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
const int  MAX = 1000007;
bool a[MAX+5];

vector<int>prime;
void sieve(){
    a[2] = false;
    for(int i=4;i<=MAX; i+=2) a[i]=true;
	for(int i = 3; i*i <= MAX; i++)
		if(a[i] == false)
			for (int j = i*i; j <= MAX; j+=2*i)
                a[j] = true;

	for (int i = 2; i <= MAX; i++)
		if(a[i] == false)
			prime.push_back(i);
}

ll nod(ll n){
    ll sum=1;
    for(int i=0;i<prime.size() and prime[i]*prime[i]<=n;i++){
        ll counter=0;
        while(n%prime[i]==0){
            counter++;
            n/=prime[i];
        }
        sum*=(counter+1);
    }
    if(n!=1) sum*=2;
    return sum-1;
}

int main(){
    sieve();
    int test,cs=1;
    scanf("%d",&test);
    while(test--){
        ll n;
        scanf("%lld",&n);
        ll m = nod(n);
        printf("Case %d: %lld\n",cs++,m);
    }
    return 0;
}
