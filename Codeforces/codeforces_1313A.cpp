#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

void solve(){
    int a[3];
    scanf("%d %d %d",&a[0],&a[1],&a[2]);
    sort(a,a+3,greater<int>());
    int ans=0;
    if(a[0]) ans++,a[0]--;
    if(a[1]) ans++,a[1]--;
    if(a[2]) ans++,a[2]--;
    if(a[0] and a[1]) ans++,a[0]--,a[1]--;
    if(a[0] and a[2]) ans++,a[0]--,a[2]--;
    if(a[1] and a[2]) ans++,a[1]--,a[2]--;
    if(a[0] and a[1] and a[2]) ans++;
    printf("%d\n",ans);
}

int main(){
    int t,cs=1;
    scanf("%d",&t);

    while(t--){
        solve();
    }
}

