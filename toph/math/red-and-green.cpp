#include <bits/stdc++.h>
using namespace std;

int main(){
    int test,n,m;
    scanf("%d",&test);
    while(test--){
        scanf("%d %d",&n,&m);
        while(m--){
            long long int a,b,red,green;
            scanf("%lld %lld",&a,&b);
            if(a>b) swap(a,b);
            a--;
            (b%2==0) ? (a%2==0)?red=(b/2)-(a/2),green=(b/2)-(a/2):red=(b/2)-((a/2)+1),green=(b/2)-(a/2) : (a%2==0)?red=((b/2)+1)-(a/2),green=(b/2)-(a/2):red=((b/2)+1)-((a/2)+1),green=(b/2)-(a/2);
            printf("%lld %lld\n",red,green);
        }
    }
    return 0;
}
