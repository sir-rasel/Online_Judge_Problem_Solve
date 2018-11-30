#include <bits/stdc++.h>
using namespace std;

int a, b, c, d;
int main()
{
  cin >> a >> b >> c >> d;
  cout << ((a + 2 * b) * (d - c - 1) + 2 * b) * (c < d ? 1 : -1);
  return 0;
}
