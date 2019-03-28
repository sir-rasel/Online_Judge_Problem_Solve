#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

vector<ll>Left,Right,coin(20);
int n,k;

void generatePossibleSum(ll sum,int start,int endd,vector<ll> &v){
    if(start==endd){
        v.push_back(sum);
        return;
    }
    for(int i=0;i<3;i++) generatePossibleSum(sum+coin[start]*i,start+1,endd,v);
}

void clr(){
    Left.clear();
    Right.clear();
    coin.clear();
}

int main(){
    int test,cs=1;
    scanf("%d",&test);
    while(test--){
        scanf("%d %d",&n,&k);
        for(int i=0;i<n;i++) scanf("%lld",&coin[i]);

        generatePossibleSum(0,0,n/2,Left);
        generatePossibleSum(0,n/2,n,Right);
        sort(Left.begin(),Left.end());

        int RightSize=Right.size();
        bool flag=true;
        for(int i=0;i<RightSize and flag;i++)
            if(k>=Right[i])
                if(*lower_bound(Left.begin(),Left.end(),k-Right[i])==k-Right[i]) flag=false;

        if(flag) printf("Case %d: No\n",cs++);
        else printf("Case %d: Yes\n",cs++);
        clr();
    }
    return 0;
}
