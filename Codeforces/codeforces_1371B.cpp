#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long int ull;
typedef pair<int,int> pii;

const int mod = 1e9+7;
const int Max = 1e6+10;

int main(){
    int test;
    scanf("%d",&test);
    while(test--){
        ull n,r;
        cin>>n>>r;

        if(n==1 or r==1) printf("1\n");
        else{
            ull ans=0;
            if(n<=r){
                n = min(n,r)-1;
                ans+=(n*(n+1))/2;
                ans++;
            }
            else ans+=(r*(r+1))/2;
            cout<<ans<<endl;
        }
    }

    return 0;
}
