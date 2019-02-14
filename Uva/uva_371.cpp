#include<bits/stdc++.h>
using namespace std;

int main(){
    long long a,b;
    while(scanf("%lld%lld",&a,&b) and a!=0 and b!=0){
        long long Max=0,p,c,Gn;
        if(a>b) swap(a,b);
        for(long long i=b; i>=a; i--){
            p=i;
            c=1;
            if(p%2==0) p/=2;
            else p=3*p+1;
            while(p!=1){
                if(p%2==0)
                {
                    p/=2;
                    c++;
                }
                else
                {
                    p=3*p+1;
                    c++;
                }
            }
            if(c>=Max)
            {
                Max=c;
                Gn=i;
            }
        }
        printf("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n",a,b,Gn,Max);
    }
    return 0;
}
