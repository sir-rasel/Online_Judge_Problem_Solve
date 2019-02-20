#include<bits/stdc++.h>
#define MX 200005
using namespace std;

typedef long long int ll;

int BIT[MX],n;

void update(int idx,int value){
    while(idx<=n){
        BIT[idx]+=value;
        idx+=(idx&-idx);
    }
}

ll query(int idx){
    ll sum=0;
    while(idx>0){
        sum+=BIT[idx];
        idx-=(idx&-idx);
    }
    return sum;
}

int main(){
    int test;
    scanf("%d",&test);
    while(test--){
        scanf("%d",&n);
        pair<int,int>index[n+5];
        memset(BIT,0,sizeof(BIT));
        for(int i=1;i<=n;i++){
            scanf("%d",&index[i].first);
            index[i].second = i;
        }
        sort(index+1,index+n+1);
        ll sum = 0;
        for(int i=1;i<=n;i++){
            int pos = index[i].second;
            sum += (query(n)-query(pos));
            update(pos,1);
        }
        printf("%lld\n",sum);
    }
    return 0;
}
