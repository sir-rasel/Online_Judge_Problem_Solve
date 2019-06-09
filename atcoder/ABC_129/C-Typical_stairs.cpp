#include <bits/stdc++.h>
using namespace std;

#define mp make_pair
#define pb push_back
#define mt make_tuple
#define eb emplace_back

int mod = 1e9 + 7;
vector<int> fib(112345, -1);

int fibf(int n){
    if(n < 2) return 1;
    if(fib[n] > -1) return fib[n];
    fib[n] = (fibf(n - 1) + fibf(n - 2)) % mod;
    return fib[n];
}

int main(){
    int n, m;
    cin >> n >> m;
    int current, prev = -1;
    vector<int> dist;
    for(int i = 0; i < m; i++){
        cin >> current;
        if(prev == current - 1 && prev){
            cout << 0 << endl;
            return 0;
        }
        else{
            dist.pb((current - 1) - (prev + 1));
            prev = current;
        }
    }
    dist.pb(n - (prev + 1));
    long long res = 1;
    for(int in : dist)
        res = (1LL * res * fibf(in)) % mod;
    cout << res << endl;
    return 0;
}
