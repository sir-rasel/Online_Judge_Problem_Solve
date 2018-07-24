#include <bits/stdc++.h>
using namespace std;

int main(){
    int test;
    scanf("%d",&test);
    for(int i=1;i<=test;i++){
        int m,n;
        scanf("%d %d",&m,&n);
        int res;
        if(m==1 or n==1) res = m*n;
        else if(m==2 or n==2){
            if(n<m) swap(n,m);
            if(n%2==0){
                int s=n/2;
                if(s%2==0) res = s*2;
                else res = (s*2)+2;;
            }
            else res = n+1;
        }
        else if(m%2!=0 and n%2!=0) res = ((m*n)+1)/2;
        else res = (m*n)/2;
        printf("Case %d: %d\n",i,res);
    }
    return 0;
}
