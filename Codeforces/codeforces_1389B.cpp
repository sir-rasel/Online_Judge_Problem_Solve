#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

const int mod = 1e9+7;
const int N = 1e8;

void solve(){
    int n,k,z;
    cin >> n >> k >> z;
    vector<int>a(n+1);
    int res = 0, sum = 0, mx = 0;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        sum += a[i];
        mx = max(mx, a[i - 1] + a[i]);
        if(i - 1 <= k){
            int rem = k - (i - 1);
            if(rem / 2 <= z){
                int to_add = (rem / 2) * mx;
                if(rem % 2 && rem / 2 + 1 <= z)
                    to_add += a[i - 1];

                res = max(res, sum + to_add);
            }
        }
    }
    cout << res << "\n";
}

int main(){
    int test;
    scanf("%d",&test);
    while(test--)
        solve();

    return 0;
}
