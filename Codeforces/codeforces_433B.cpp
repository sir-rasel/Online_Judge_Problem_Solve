#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long int ull;

ull normalSum[100010];
ull sortingSum[100010];

int main(){
    int n;
    scanf("%d",&n);
    ull arr[n+5];
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        normalSum[i]+=(normalSum[i-1]+arr[i]);
    }
    sort(arr+1,arr+(n+1));
    for(int i=1;i<=n;i++) sortingSum[i]+=(sortingSum[i-1]+arr[i]);
    int query;
    scanf("%d",&query);
    for(int i=0;i<query;i++){
        int type;
        cin>>type;
        if(type==1){
            int l,r;
            cin>>l>>r;
            cout<<normalSum[r]-normalSum[l-1]<<endl;
        }
        else{
            int l,r;
            cin>>l>>r;
            cout<<sortingSum[r]-sortingSum[l-1]<<endl;
        }
    }
    return 0;
}
