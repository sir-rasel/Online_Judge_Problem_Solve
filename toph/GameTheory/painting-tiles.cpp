#include<bits/stdc++.h>
using namespace std;

int main(){
    int test,cs=1;
    scanf("%d",&test);
    while(test--){
        long long int n;
        scanf("%lld",&n);
        if(n%7<2) printf("Case %d: Oh no, my eggs! :(\n",cs++);
        else printf("Case %d: No eggs for you! :D\n",cs++);
    }
    return 0;
}
