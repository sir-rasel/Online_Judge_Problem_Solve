#include<bits/stdc++.h>
using namespace std;

int x[23],y[23];

int sum(int n){
    int s=0;
    for(int i = 0; i < n; i++)
        if(x[i] == 1) s += y[i];
    return s;
}

int main () {
    int test;
    scanf("%d",&test);
    while(test--){
        int n,m;
        scanf("%d %d",&n,&m);
        bool flag = false;
        for(int i = 0; i < n; i++) scanf("%d",&y[i]);
        for(int i = 1; i < (1<<n); i++){
            int v = i;
            int a = 0;
            while(v > 0){
                x[a++] = v % 2;
                v /= 2;
            }
            int s = sum(n);
            if(s==m) {
                flag = true;
                break;
            }
        }
        if(flag) printf("Yes\n");
        else printf("No\n");
        for(int i=0;i<23;i++) x[i]=0;
        for(int i=0;i<23;i++) y[i]=0;
    }
}
