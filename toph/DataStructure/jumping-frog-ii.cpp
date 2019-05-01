#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

const int max_n = 100111, inf = 1000111222;

struct segment_tree {
    int tr[4 * max_n];
    int buf[4 * max_n];

    void clr() {
        for (int i = 0; i < max_n * 4; ++i) {
            tr[i] = 0;
			buf[i] = 0;
        }
    }

    void push(int cur, int l, int r) {
        tr[cur] += buf[cur];
        if (l != r) {
            buf[cur * 2] += buf[cur];
            buf[cur * 2 + 1] += buf[cur];
        }
        buf[cur] = 0;
    }

    void add(int cur, int l, int r, int ql, int qr, int val) {
		push(cur, l, r);
        if (l == ql && r == qr) {
            buf[cur] += val;
            push(cur, l, r);
            return;
        }
        if (qr < l || ql > r) {
            return;
        }
        push(cur, l, r);
        int mid = (l + r) / 2;
        add(cur * 2, l, mid, ql, min(mid, qr), val);
        add(cur * 2 + 1, mid + 1, r, max(mid + 1, ql), qr, val);
        tr[cur] = min(tr[cur * 2], tr[cur * 2 + 1]);
    }

    int get(int cur, int l, int r) {
        push(cur, l, r);
        return tr[cur];
    }
} st;

int m[max_n];

int main(){
    int T;
    cin >> T;
    for (int I = 1; I <= T; ++I) {
        cout << "Case " << I << ":\n";
        int n, q;
        cin >> n >> q;
        st.clr();
        st.add(1, 0, n + 1, 0, 0, inf);
        memset(m, 0, sizeof(m));
        for (int i = 1; i <= n; ++i) {
            int x;
            scanf("%d", &x);
            m[i] = x;
            if (x) {
                st.add(1, 0, n + 1, i + 1, min(i + x, n + 1), 1);
            }
        }
        for (int i = 0; i < q; ++i) {
            int t, pos, x;
            scanf("%d", &t);
            if (t == 2) {
                pos = 0;
            } else {
                scanf("%d", &pos);
            }
            scanf("%d", &x);
            if (m[pos]) {
                st.add(1, 0, n + 1, pos + 1, min(pos + m[pos], n + 1), -1);
            }
            m[pos] = x;
            if (x) {
                st.add(1, 0, n + 1, pos + 1, min(pos + x, n + 1), 1);
            }
            if (t == 2) {
                if (m[0] == 0 || st.get(1, 0, n + 1) == 0) {
                    printf("no\n");
                } else {
                    printf("yes\n");
                }
            }
        }
    }
    return 0;
}
