#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long int ull;

ull normalSum[1000000];

int main(){
    int n,k;
    scanf("%d %d",&n,&k);
    ull num;
    for(int i=1;i<=n;i++){
        cin>>num;
        normalSum[i]+=(normalSum[i-1]+num);
    }
    int minn=INT_MAX,ans;
    for(int i=1;i<=n-k+1;i++){
        if( (normalSum[i+k-1]-normalSum[i-1])<minn ){
            minn = (normalSum[i+k-1]-normalSum[i-1]);
            ans=i;
        }
    }
    printf("%d\n",ans);
    return 0;
}
