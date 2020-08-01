#include <bits/stdc++.h>
using namespace std;

const int N=200005;
int a[N];

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        for(int i = 1; i <= n; i++)
            cin >> a[i];

        int F[(1LL << 19) + 5];
        memset(F, -1, sizeof F);

        for(int i = 1; i <= n; i++)
            F[i] = a[i];

        for (int i = 0; i < 17; ++i) {
            for (int j = 0; j < (1 << 17); ++j) {
                if ((j & (1 << i)) > 0){
                    F[j] = max(F[j ^ (1 << i)], F[j]);
                }
            }
        }

        int Q[n + 1];
        int mask = (1LL << 17) - 1;
        for(int i = 1; i <= n; i++){
            int val = -1;
            if(F[mask ^ i] != -1) val = a[i] + F[mask ^ i];
            Q[i] = val;
        }

        int q;
        cin >> q;
        while(q--){
            int ind;
            cin >> ind;
            cout << Q[ind] << endl;
        }
    }

    return 0;
}
