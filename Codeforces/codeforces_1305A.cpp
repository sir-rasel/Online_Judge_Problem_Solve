#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int a[n+5],b[n+5];
        for(int i=0;i<n;i++) scanf("%d",&a[i]);
        for(int i=0;i<n;i++) scanf("%d",&b[i]);
        sort(a,a+n);
        sort(b,b+n);
        for(int i=0;i<n;i++) {
            if(i+1==n) printf("%d\n",a[i]);
            else printf("%d ",a[i]);
        }
        for(int i=0;i<n;i++) {
            if(i+1==n) printf("%d\n",b[i]);
            else printf("%d ",b[i]);
        }
    }
    return 0;
}
