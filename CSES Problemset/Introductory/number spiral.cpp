#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

int main(){
    int n;
    scanf("%d",&n);
    while(n--){
        ll x,y,ans;
        scanf("%lld %lld",&y,&x);

        if(max(x,y)%2==0) swap(x,y);

        if(y<=x)
            ans = ((x*x)-(y-1));
        else
            ans = ((y-1)*(y-1)+x);
        printf("%lld\n",ans);
    }
    return 0;
}
