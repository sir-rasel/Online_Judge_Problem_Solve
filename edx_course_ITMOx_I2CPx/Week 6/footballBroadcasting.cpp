#include <bits/stdc++.h>

#define fori(i,b,e) for (int i = (b); i < (e); ++i)
#define pb(x) push_back(x)
#define mp(x,y) make_pair(x,y)

using namespace std;

typedef long long int int64;

inline int nextInt() { int x; scanf("%d", &x); return x; }
inline int64 nextLong() { int64 x; scanf("%I64d", &x); return x; }

const int MAX = 302;
int prevI[MAX][MAX][MAX], prevJ[MAX][MAX][MAX];

int di[] = {0, 1, 0,-1, 0};
int dj[] = {0, 0,-1, 0, 1};

int main() {
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  int w = nextInt() + 1, h = nextInt() + 1;
  int n = nextInt();
  fori(i,1,w)
    fori(j,1,h)
      prevI[0][i][j] = prevJ[0][i][j] = 1; // not -1
  fori(t,1,n + 1) {
    fori(i,1,w)
      fori(j,1,h)
        prevI[t][i][j] = -1;
    fori(i,1,w) {
      fori(j,1,h) {
        if (prevI[t-1][i][j] != -1) {
          fori(s,0,5) {
            prevI[t][i + di[s]][j + dj[s]] = i;
            prevJ[t][i + di[s]][j + dj[s]] = j;
          }
        }
      }
    }
    int x0 = nextInt(), y0 = nextInt(), x1 = nextInt(), y1 = nextInt();
    fori(i,x0,x1+1)
      fori(j,y0,y1+1)
        prevI[t][i][j] = -1;
  }
  int curI = -1, curJ = -1;
  fori(i,1,w) {
    fori(j,1,h) {
      if (prevI[n][i][j] != -1) {
        curI = i;
        curJ = j;
        break;
      }
    }
  }
  if (curI == -1) {
    printf("Impossible");
    return 0;
  }
  vector<int> ansI, ansJ;
  for (int t = n; t > 0; t--) {
    ansI.pb(curI);
    ansJ.pb(curJ);
    int oldI = curI;
    curI = prevI[t][curI][curJ];
    curJ = prevJ[t][oldI][curJ];
  }
  for (int t = n-1; t >= 0; t--) {
    printf("%d %d\n", ansI[t], ansJ[t]);
  }
  return 0;
}
