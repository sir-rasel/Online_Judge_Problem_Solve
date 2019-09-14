#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    while(scanf("%d %d",&n,&m) and n and m){
        int ans;
        if(n==2 and m==2) ans = 4;
        else if(n==2 or m==2){
            if(n==2){
                int temp = ceil(m/2.0);
                if(m%2==0 and m%4!=0) temp++;
                ans = temp*2;
            }
            else {
                int temp = ceil(n/2.0);
                if(n%2==0 and n%4!=0) temp++;
                ans = temp*2;
            }
        }
        else if(n==1 or m==1) ans = max(n,m);
        else ans = ceil( (n*m)/2.0 );
        printf("%d knights may be placed on a %d row %d column board.\n",ans,n,m);
    }
    return 0;
}
