#include <bits/stdc++.h>
#define mod 10000007
using namespace std;

int main(){
    int n;
    cin>>n;
    int res=1;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        res=(res*num)%mod;
    }
    cout<<res<<endl;
    return 0;
}
