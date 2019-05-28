#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    int d,n;
    scanf("%d %d",&d,&n);
    if(n==100) n++;
    if(d==0) printf("%d\n",n);
    else if(d==1) printf("%d\n",n*100);
    else printf("%d\n",n*100*100);
    return 0;
}
