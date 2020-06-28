#include <bits/stdc++.h>

#define mp make_pair
#define pb push_back
#define f first
#define s second
#define ll long long
#define forn(i, a, b) for(int i = (a); i <= (b); ++i)
#define forev(i, b, a) for(int i = (b); i >= (a); --i)
#define VAR(v, i) __typeof( i) v=(i)
#define forit(i, c) for(VAR(i, (c).begin()); i != (c).end(); ++i)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())
#define file(s) freopen(s".in","r",stdin); freopen(s".out","w",stdout);

using namespace std;

const int maxn = (int)2e3 + 100;
const int mod = (int)1e9 + 7;
const int P = (int) 1e6 + 7;
const double pi = acos(-1.0);

#define inf mod

typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> Vll;
typedef vector<pair<int, int> > vpii;
typedef vector<pair<ll, ll> > vpll;

int n, m, cnt[maxn];
char s[maxn][maxn];
bool can1[maxn][maxn], can2[maxn][maxn], good[maxn][maxn];
int main () {
	scanf("%d %d\n", &n, &m);
	forn(i, 1, n)
		scanf("%s", s[i] + 1);
	can1[1][1] = 1;
	forn(i, 1, n)
		forn(j, 1, m)
			if(s[i][j] == '.')
				can1[i][j] |= (can1[i][j - 1] | can1[i - 1][j]);

	can2[n][m] = 1;
	forev(i, n, 1)
		forev(j, m, 1)
			if(s[i][j] == '.')
				can2[i][j] |= (can2[i][j + 1] | can2[i + 1][j]);

	forn(i, 1, n)
		forn(j, 1, m)
			good[i][j] = (can1[i][j] & can2[i][j]), cnt[i + j] += good[i][j];

	forn(i, 1, n){
		forn(j, 1, m){
			if(s[i][j] == '#'){
				if(can1[n][m]) printf("1 ");
				else{
					int ok1 = 0, ok2 = 0;
					if(i > 1) ok1 |= can1[i - 1][j];
					if(j > 1) ok1 |= can1[i][j - 1];
					if(i < n) ok2 |= can2[i + 1][j];
					if(j < m) ok2 |= can2[i][j + 1];
					printf("%d ", (ok1 & ok2));
				}
			}
			else{
				if(!can1[n][m]){
					printf("0 ");
					continue;
				}
				if(good[i][j] && cnt[i + j] == 1) printf("0 ");
				else printf("1 ");
			}
		}
		puts("");
	}
	return 0;
}
