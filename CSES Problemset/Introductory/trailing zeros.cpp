#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;
const int mod = 1e9+7;

int trailingZeros(int n){
    int count = 0;
    for(int i=5;n/i>=1;i*=5)
        count+=(n/i);
    return count;
}

int main(){
    int n;
    scanf("%d",&n);
    ll ans = trailingZeros(n);
    printf("%d\n",ans);
    return 0;
}
