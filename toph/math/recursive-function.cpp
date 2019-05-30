#include <bits/stdc++.h>
using namespace std;

int main(){
    int test,cs=1;
    scanf("%d",&test);
    while(test--){
        long long a,A,b,B,c,n1,n2,n,l,x,ans;
        scanf("%lld %lld %lld %lld %lld",&a,&A,&b,&B,&c);
        if(a>b){
           swap(a,b);
           swap(A,B);
        }
        n1=0;
        n2=1;
        l=b-a;
        for(int i=2;i<=l;i++){
           n=n1+n2;
           n1=n2;
           n2=n;

        }
        x = (B-(A*n1))/n2;
        if(c>a){
            n1=0;
            n2=1;
            l=c-a;
            for(int i=2;i<=l;i++){
               n=n1+n2;
               n1=n2;
               n2=n;
            }
            ans=(x*n2)+(A*n1);
        }
        else if(c<a){
            n1=A;
            n2=x;
            for(int i=a-1;i>=c;i--){
               n=n2-n1;
               n2=n1;
               n1=n;
            }
            ans=n;
        }
        else ans=A;
        printf("Case #%d: %lld\n",cs++,ans);
    }
    return 0;
}
