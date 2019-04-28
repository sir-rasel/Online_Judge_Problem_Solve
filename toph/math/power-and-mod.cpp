#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int t;
	string s;
    cin >> t;
    while (t--){
		unsigned long long al, bl, ml;
		cin >> al >> bl >> s;
        __uint128_t a = al, b = bl, m;
		if (s == "18446744073709551616")
			m = 1 + (__uint128_t) 18446744073709551615ULL;
		else
			m = stoull(s, 0, 0);
        __uint128_t res = 1, y = a % m;
		while (b > 0) {
			if (b % 2) res = (res * y) % m;
			y = (y * y) % m;
			b = b / 2;
		}
        cout << (unsigned long long) res << endl;
    }
    return 0;
}
