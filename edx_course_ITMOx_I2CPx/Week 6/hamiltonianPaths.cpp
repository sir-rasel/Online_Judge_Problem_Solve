#include <bits/stdc++.h>

#define fori(i,b,e) for (int i = (b); i < (e); ++i)
#define pb(x) push_back(x)
#define mp(x,y) make_pair(x,y)

using namespace std;

typedef long long int int64;

inline int nextInt() { int x; scanf("%d", &x); return x; }
inline int64 nextLong() { int64 x; scanf("%I64d", &x); return x; }

const int MAXN = 25;
int g[MAXN];
int g2[MAXN];
char s[26];
int dp[1 << (MAXN-1)];
int dp2[1 << (MAXN-1)];
int n;
int lim;
int was[MAXN];

void runDp(int *dp, int *g) {
  dp[0] = 1;
  fori (m,0,lim) {
    fori(v,1,n) {
      int bit = 1 << (v - 1);
      if ((m & bit) == 0)
        continue;
      int prev = m ^ bit;
      if ((g[v] & dp[prev]) != 0)
        dp[m] |= 1 << v;
    }
  }
}

bool arePaths = false;

vector<int> path(int v, int m, int* dp, int* g) {
  vector<int> ans;
  while (m > 0) {
    assert(m & (1 << (v-1)));
    ans.pb(v);
    m = m ^ (1 << (v-1));
    fori(u,1,n) {
      if (g[v] & dp[m] & (1 << u)) {
        v = u;
        break;
      }
    }
  }
  return ans;
}

void printAns(const vector<int>& start, const vector<int>& end) {
  arePaths = true;
  vector<int> res;
  res.insert(res.end(), start.begin(), start.end());
  res.push_back(0);
  res.insert(res.end(), end.rbegin(), end.rend());
  printf("%d", res[0] + 1);
  fori(i,1,res.size())
    printf(" -> %d", res[i] + 1);
  printf("\n");
}

int main() {
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  n = nextInt();
  fori(i,0,n) {
    scanf("%s", s);
    fori(j,0,n)
      if (s[j] == '1') {
        g[j] |= (1 << i);
        g2[i] |= (1 << j);
      }
  }
  lim = 1 << (n-1);
  runDp(dp, g);
  runDp(dp2, g2);

  int full = lim-1;
  fori(m,0,lim) {
    int other = full ^ m;
    int starts = dp2[m], ends = dp[other];
    fori(u,0,n) {
      if ((starts & (1 << u)) && (~was[u] & ends)) {
        vector<int> start = path(u, m, dp2, g2);
        fori(v,0,n) {
          if (~was[u] & (1 << v) & ends) {
            vector<int> end = path(v, other, dp, g);
            was[u] |= 1 << v;
            printAns(start, end);
          }
        }
      }
    }
  }
  if (!arePaths)
    printf("No paths");
  return 0;
}
