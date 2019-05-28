#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++) {
        int num;
        scanf("%d",&num);
    }
    int ans=ceil((double)(n-1)/(m-1));
    printf("%d\n",ans);
    return 0;
}
