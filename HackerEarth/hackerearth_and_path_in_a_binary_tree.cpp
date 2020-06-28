#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

const ll Max = 1e5+10;
vector<ll>result(Max,0);

void generate_answer(){
    for(ll i=1;i<Max;i++)
        result[i] = result[i/2]+i;
}

int main(){
    generate_answer();
    int test;
    scanf("%d",&test);

    for(int i=1;i<=test;i++){
        int n;
        scanf("%d",&n);

        int idx = ceil((n-2)/4.0);
        ll ans = result[idx];

        printf("%lld\n",ans);
    }
    return 0;
}
