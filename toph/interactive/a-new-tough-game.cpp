#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    scanf("%d",&n);
    string s,t;
    s.resize(n);
    t.resize(n);
    for (int i = 0; i < n; i++) t[i] = 'z';
    cout << "? " << t << endl;
    int m;
    scanf("%d",&m);
    for (int i = 0; i < n; i++) {
        string tmp = t;
        tmp[i] = 'a';
        cout << "? " << tmp << endl;
        int ni;
        scanf("%d",&ni);
        s[i] = ('a' + 'z' + ni - m) / 2;
    }
    cout << "! " << s << endl;
    return 0;
}
