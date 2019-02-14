#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1000+3;

int vessels[MAXN];
int n, m;

bool isOk(int cap){
    int v = 0;
    int containerRemain = m;

    while(v < n && containerRemain) {
        int pour = 0;

        while(v < n && pour + vessels[v] <= cap) {
            if(n - v <= containerRemain)
                return true;
            pour += vessels[v++];
        }

        --containerRemain;
    }
    return (v == n);
}

int bs(int s, int t){
    int ret;

    while(s <= t) {
        int mid = (s + t) >> 1;

        if(isOk(mid)) {
            ret = mid;
            t = mid - 1;
        }
        else s = mid + 1;
    }

    return ret;
}

int main(){
    int test;
    scanf("%d",&test);
    for(int tc = 1; tc <= test; ++tc) {
        scanf("%d %d",&n,&m);
        int mx = -1, sum = 0;
        for(int i = 0; i < n; ++i) {
            scanf("%d",&vessels[i]);
            sum += vessels[i];
            if(vessels[i] > mx) mx = vessels[i];
        }
        printf("Case %d: %d\n", tc, bs(mx,sum));
    }

    return 0;
}
