#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long int ull;

int main(){
    ull n,h;
    cin>>n>>h;
    ull arr[n+5];
    for(int i=0;i<n;i++) cin>>arr[i];
    sort(arr,arr+n);
    ull res=0;
    for(int i=0;i<n;i++){
        res+=(arr[i]*h);
        if(h-1>=1) h--;
    }
    cout<<res<<endl;
    return 0;
}
