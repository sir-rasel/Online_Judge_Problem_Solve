#include<bits/stdc++.h>
using namespace std;

const int maxn = 1e5 + 100;
int cnt[maxn];

void precalculate(){
    for(int i = 1; i<maxn; i++){
        int sq = sqrt(i)+1;
        int cn = 0;
        for(int j = 1; j<=sq; j++){
            if(i%j == 0) continue;
            int p = i/j;
            if(p%j == 0) cn++;
        }
        cnt[i] = cn;
    }
}

int main(){
    int q , n , cs = 1;
    precalculate();
    cnt[1] = 0;
    scanf("%d",&q);
    while(q--){
        scanf("%d",&n);
        printf("Query %d: %d\n",cs++,cnt[n]);
    }
    return 0;
}
