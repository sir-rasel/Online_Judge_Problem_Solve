#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, day, req, mnt;
    cin >> t;
    while(t--)
    {
        int h1, m1, h2, m2;
        char c;
        scanf("%d %d",&day, &req);
        mnt = req * 60;
        int res = 0;
        while(day--)
        {
            scanf("%d:%d %d:%d",&h1,&m1,&h2,&m2);
            int tmp1 = h1 * 60 + m1;
            int tmp2 = h2 * 60 + m2;
             res += abs(tmp2-tmp1);
        }
        if(res >= mnt) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
