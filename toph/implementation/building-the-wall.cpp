#include<bits/stdc++.h>
using namespace std;

int x, y, z, n, m;
int borders[200000];

int main(){
    scanf("%d %d",&n,&m);
    for(int i = 1; i <= m; i++) {
        scanf("%d %d", &x, &y);
        borders[x]++;
        borders[y + 1]--;
    }
    int ans = 0;
    for(int i = 1; i <= n; i++){
        borders[i] += borders[i - 1];
        if(borders[i] > 1) ans++;
    }
    printf("%d\n",ans);
    return 0;
}
