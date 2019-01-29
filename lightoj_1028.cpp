#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
const int  MAX = 1000007;

vector<int>prime;

void sieve(){
	bool a[MAX+5];
	memset(a, 0, sizeof(a));

	for(int i = 2; i <= MAX; i++)
		if(a[i] == 0)
			for (int j = i + i; j <= MAX; j+=i) a[j] = 1;


	for (int i = 2; i <= MAX; i++)
		if(a[i] == 0)
			prime.push_back(i);
}

ll nod(ll n){
    ll sum=1;
    ll sqt = sqrt(n);
    for(int i=0;i<=prime.size()-1 and prime[i]<=sqt;i++){
        if(n<prime[i]) break;
        ll counter=0;
        while(n%prime[i]==0){
            counter++;
            n/=prime[i];
        }
        sum*=(counter+1);
    }
    if(n!=1) sum*=2;
    sum--;
    return sum;
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
