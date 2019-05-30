#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll _r,_a,_b,_d;

__int128 fun(__int128 x){
    __int128 ret = (x*(x+1))/((__int128)2);
    return ret%_d;
}
int main(){
    int test;
    scanf("%d",&test);
    while(test--){
		cin>>_r>>_a>>_b>>_d;
		__int128 r=_r, a=_a, b=_b, d=_d;
		__int128 s_a = (fun(r/a)*a)%_d;
		__int128 s_b = (fun(r/b)*b)%_d;

		ll _g = __gcd(_a, _b);
		__int128 g = _g;
		__int128 lcm = ((a/g)*b);
		__int128 s_ab = (fun(r/lcm)*(lcm %_d) )%_d;

		__int128 _p = (s_a + s_b - s_ab + d)%d;
		ll p = _p;
		cout<<p<<endl;
    }
    return 0;
}
