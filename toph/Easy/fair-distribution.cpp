#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    if(m<n) swap(m,n);
    if(m%n==0) printf("0\n");
    else printf("%d\n",n-(m%n));
    return 0;
}
