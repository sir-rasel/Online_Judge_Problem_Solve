#include <bits/stdc++.h>
using namespace std;

void solve_test() {
    int N, K;
    scanf("%d%d", &N, &K);
    vector<int> v(N), a(N);
    for(int i = 0; i < N; i++)  scanf("%d", &v[i]);
    for(int i = 1; i + 1 < N; i++)
        a[i] = (v[i] > v[i - 1]) && (v[i] > v[i + 1]);

    int cnt = 0;
    for(int i = 1; i + 1 < K; i++)
        cnt += a[i];
    int ans = cnt, l = 0;
    for(int i = K; i < N; i++) {
        cnt += a[i - 1] - a[i - K + 1];
        if(cnt > ans)   ans = cnt, l = i - K + 1;
    }
    printf("%d %d\n", ans + 1, l + 1);
}

int main() {
    int T;
    scanf("%d", &T);
    for(int t = 1; t <= T; t++)
        solve_test();

    return 0;
}
