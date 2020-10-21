#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

ll ar[35] = {0, 1, 3, 40, 1260, 72576, 6652800, 889574400, 163459296000, 39520825344000, 12164510040883200};

int main() {
        ll n;
        cin >> n;
        cout << ar[n / 2] << endl;
        return 0;
}
