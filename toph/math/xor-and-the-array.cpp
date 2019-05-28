#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,ans=0,num;
    scanf("%d",&n);
    map<int,int> mp;
    for (int i = 0; i < n; ++i) {
        scanf("%d",&num);
        mp[num]++;
    }
    for(auto x: mp) if(x.second==1) ans++;
    printf("%d\n",ans);
    return 0;
}
