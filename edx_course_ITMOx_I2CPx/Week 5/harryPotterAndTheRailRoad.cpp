#include <bits/stdc++.h>

#define fori(i,b,e) for (int i = (b); i < (e); ++i)
#define pb(x) push_back(x)
#define mp(x,y) make_pair(x,y)

using namespace std;

typedef long long int int64;

inline int nextInt() { int x; scanf("%d", &x); return x; }

const int MAXN = 50001, MAXM = 150000;
vector<int> g[MAXN];
int from[MAXM], to[MAXM];
int label[MAXM];
bool was[MAXN];
int curNum = 1;

void dfs(int u) {
  was[u] = true;
  for (int e : g[u]) {
    if (label[e] == 0) {
      label[e] = curNum++;
      int v = (from[e] + to[e]) - u;
      if (!was[v])
        dfs(v);
    }
  }
}

int main() {
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  int n = nextInt() + 1, m = nextInt(); // n++
  fori(i,0,m) {
    from[i] = nextInt();
    to[i] = nextInt();
    g[from[i]].pb(i);
    g[to[i]].pb(i);
  }
  int start = -1;

  fori(u,1,n) {
    if (g[u].size() == 1) {
      if (start == -1) {
        start = u;
      } else if (m > 1) {
        printf("IMPOSSIBLE");
        return 0;
      }
    }
  }
  if (start == -1)
    start = 1;
  dfs(start);
  fori(i,0,m)
    printf("%d\n", label[i]);
  return 0;
}
