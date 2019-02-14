#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long int ull;

ull normalSum[100010];

int main(){
    int n;
    scanf("%d",&n);
    ull arr[n+5];
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        normalSum[i]+=(normalSum[i-1]+arr[i]);
    }
    int query;
    scanf("%d",&query);
    for(int i=0;i<query;i++){
        int l,r;
        cin>>l>>r;
        cout<<normalSum[r+1]-normalSum[l]<<endl;
    }
    return 0;
}
