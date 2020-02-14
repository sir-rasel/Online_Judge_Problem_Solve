#include <bits/stdc++.h>

#define fori(i,b,e) for (int i = (b); i < (e); ++i)
#define pb(x) push_back(x)

using namespace std;

typedef long long int int64;

inline int nextInt() { int x; scanf("%d", &x); return x; }

const int MAXN = 2001;
const int64 INF = (int64)1e15;
int g[MAXN][MAXN];
int64 d[MAXN];
bool was[MAXN];

int main() {
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  int n = nextInt() + 1, s = nextInt(), f = nextInt(); // n++
  fori(i,1,n)
    fori(j,1,n)
      g[i][j] = nextInt();
  fori(i,1,n)
    d[i] = INF;
  d[s] = 0;
  while(true) {
    int u = -1;
    fori(j,1,n)
      if (!was[j] && d[j] < INF && (u == -1 || d[u] > d[j]))
        u = j;

    was[u] = true;
    if (u == -1 || u == f)
      break;
    fori(v,1,n) {
      int w = g[u][v];
      if (w != -1)
        d[v] = min(d[v], d[u] + w);
    }
  }
  if (!was[f])
    printf("-1");
  else
    printf("%I64d ", d[f]);
  return 0;
}
