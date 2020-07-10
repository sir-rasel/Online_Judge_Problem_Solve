#include <bits/stdc++.h>
#define fi first
#define se second
#define m_p make_pair
#define p_b push_back
#define e_b emplace_back
#define all(x) (x).begin(),(x).end()
#define sz(x) ((int)(x).size())
using namespace std;
using ll = long long;
using ld = long double;
template<class T> bool chmax(T &a,T b){if(a<b){a=b;return true;}return false;}
template<class T> bool chmin(T &a,T b){if(a>b){a=b;return true;}return false;}

int main(){
  ios_base::sync_with_stdio(false);cin.tie(0);
  int H,W,K;
  cin >> H >> W >> K;
  vector<string> S(H);
  for(int i=0;i<H;i++)  cin >> S.at(i);

  int ans=0;
  for(int bitH=0;bitH<(1<<H);bitH++){
    for(int bitW=0;bitW<(1<<W);bitW++){
      int cnt=0;
      for(int i=0;i<H;i++){
        for(int j=0;j<W;j++){
          if(bitH&(1<<i)) continue;
          if(bitW&(1<<j)) continue;
          if(S.at(i).at(j)=='#')  cnt++;
        }
      }
      if(cnt==K)  ans++;
    }
  }
  cout << ans << endl;

  return 0;
}
