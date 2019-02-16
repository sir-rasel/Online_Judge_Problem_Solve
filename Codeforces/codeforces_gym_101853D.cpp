#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, cnt, x;
    cin >> t;
    while(t--)
    {
        cnt = 0;
        cin >> n;
        while(n--)
        {
            cin >> x;
            if(x > 0) cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}
