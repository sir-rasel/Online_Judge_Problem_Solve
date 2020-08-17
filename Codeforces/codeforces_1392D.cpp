#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, ans = 0;
    cin >> n;
    string s;
    cin >> s;
    int cnt = 0;
    while(s.size() && s[0] == s.back()) {
        cnt++;
        s.pop_back();
    }
    if(s.empty()) {
        if(cnt <= 2) {
            cout << "0\n";
            return;
        }
        if(cnt == 3) {
            cout << "1\n";
            return;
        }
        cout << (cnt + 2) / 3 << '\n';
        return;
    }
    s.push_back('$');
    for(int i = 0; i + 1 < s.size(); i++) {
        cnt++;
        if(s[i] != s[i + 1]) {
            ans += cnt / 3;
            cnt = 0;
        }
    }
    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--)
        solve();
}
