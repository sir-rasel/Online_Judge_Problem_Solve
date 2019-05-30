#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[3];
    for(int i=0;i<3;i++) scanf("%d",&a[i]);
    sort(a,a+3);
    int ans=abs(a[1]-a[2])+abs(a[0]-a[1]);
    printf("%d\n",ans);
    return 0;
}
