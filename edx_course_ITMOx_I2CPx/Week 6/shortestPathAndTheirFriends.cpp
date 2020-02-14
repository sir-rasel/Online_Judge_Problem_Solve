#include <bits/stdc++.h>

#define fori(i,b,e) for (int i = (b); i < (e); ++i)
#define pb(x) push_back(x)

using namespace std;

typedef long long int int64;

inline int nextInt() { int x; scanf("%d", &x); return x; }
inline int64 nextLong() { int64 x; scanf("%I64d", &x); return x; }

const int MAXN = 2001, MAXM = 5000;
const int64 INF = (int64)2e18;
vector<int> g[MAXN];
int from[MAXM], to[MAXM];
int64 w[MAXM], d[MAXN];
bool neg[MAXN];

void dfs(int u) {
  neg[u] = true;
  for (auto v : g[u])
    if (!neg[v])
      dfs(v);
}

int main() {
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  int n = nextInt() + 1, m = nextInt(), s = nextInt(); // n++
  fori(i,0,m) {
    from[i] = nextInt();
    to[i] = nextInt();
    w[i] = nextLong();
    g[from[i]].pb(to[i]);
  }
  fori(i,1,n)
    d[i] = INF;
  d[s] = 0;

  fori(i,1,n-1)
    fori(e,0,m)
      if (d[from[e]] < INF && d[to[e]] > d[from[e]] + w[e])
        d[to[e]] = max(-INF, d[from[e]] + w[e]);

  fori(e,0,m)
    if (!neg[to[e]] && d[from[e]] < INF && d[to[e]] > d[from[e]] + w[e])
      dfs(to[e]);

  fori(u,1,n) {
    if (neg[u])
      printf("-\n");
    else if (d[u] == INF)
      printf("*\n");
    else
      printf("%I64d\n", d[u]);
  }
  return 0;
}
