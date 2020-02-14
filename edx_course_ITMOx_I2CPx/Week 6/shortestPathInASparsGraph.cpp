#include <bits/stdc++.h>

#define fori(i,b,e) for (int i = (b); i < (e); ++i)
#define pb(x) push_back(x)
#define mp(x,y) make_pair(x,y)

using namespace std;

inline int nextInt() { int x; scanf("%d", &x); return x; }

const int MAXN = 30001, MAXM = 400000;
const int INF = (int)4e8;
vector<int> g[MAXN];
int from[MAXM], to[MAXM], w[MAXM], d[MAXN];

int main() {
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  int n = nextInt() + 1, m = nextInt(), s = 1; // n++
  fori(i,0,m) {
    from[i] = nextInt();
    to[i] = nextInt();
    w[i] = nextInt();
    g[from[i]].pb(i);
    g[to[i]].pb(i);
  }
  fori(i,1,n)
    d[i] = INF;
  d[s] = 0;
  priority_queue<pair<int,int> > q;
  q.push(mp(-d[s], s));
  while (!q.empty()) {
    auto p = q.top();
    q.pop();
    int u = p.second;
    if (p.first != -d[u])
      continue;
    for (auto e : g[u]) {
      int v = (from[e] + to[e]) - u;
      if (d[v] > d[u] + w[e]) {
        d[v] = d[u] + w[e];
        q.push(mp(-d[v], v));
      }
    }
  }
  fori(u,1,n) {
    printf("%d ", d[u]);
  }
  return 0;
}
