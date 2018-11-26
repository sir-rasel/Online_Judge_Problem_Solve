# include <bits/stdc++.h>
using namespace std;

int mx,c[28];
string s;
char ans;

int main ()
{
    cin >> s;
    for(int i = 0;i < s.size();i ++)
    (++c[s[i] - 'a'] > mx ?  mx = c[s[i] - 'a'],ans = s[i]: ans = ans);
    cout << ans;
    return 0;
}
