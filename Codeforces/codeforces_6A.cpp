#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[4];
    scanf("%d %d %d %d",&a[0],&a[1],&a[2],&a[3]);
    sort(a,a+4);
    if(a[0]+a[1]>a[2] or a[1]+a[2]>a[3]) printf("TRIANGLE\n");
    else if(a[0]+a[1]==a[2] or a[1]+a[2]==a[3]) printf("SEGMENT\n");
    else printf("IMPOSSIBLE\n");
    return 0;
}
