#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

const int MAXN = 1e6+10;
const int K = 25;

int main(){
    int n,q;
    scanf("%d %d",&n,&q);

    int log[MAXN+1];
    log[1] = 0;
    for (int i = 2; i <= MAXN; i++)
        log[i] = log[i/2] + 1;

    int st[MAXN][K + 1];
    for(int i=0;i<n;i++){
        int num;
        scanf("%d",&num);
        st[i][0] = num;
    }

    for (int j = 1; j <= K; j++)
        for (int i = 0; i + (1 << j) <= n; i++)
            st[i][j] = min(st[i][j-1], st[i + (1 << (j - 1))][j - 1]);

    while(q--){
        int L,R;
        scanf("%d %d",&L,&R);
        L--,R--;

        if(L>R) swap(L,R);

        int j = log[R - L + 1];
        int minimum = min(st[L][j], st[R - (1 << j) + 1][j]);
        printf("%d\n",minimum);
    }

    return 0;
}
