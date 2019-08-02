#include<bits/stdc++.h>
using namespace std;

int nod(int n){
    int ans=1;
    for(int i=2;i<=sqrt(n+1);i++){
        if(n%i==0){
            int count=0;
            while(n%i==0){
                count++;
                n/=i;
            }
            ans*=(count+1);
        }
    }
    if(n!=1) ans*=2;
    return ans;
}

int main(){
    int test;
    scanf("%d",&test);
    while(test--){
        int n,m;
        scanf("%d %d",&n,&m);
        int g = __gcd(n,m);
        int ans = nod(g);
        printf("%d\n",ans);
    }
    return 0;
}
