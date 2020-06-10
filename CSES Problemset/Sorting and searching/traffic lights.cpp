#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

int main(){
    int x, n;
    scanf("%d %d",&x,&n);

    set <int> s;
    multiset <int> m;

    s.insert(0);
    s.insert(x);
    for(int i = 1; i <= n; ++i){
        int pi;
        scanf("%d",&pi);

        auto l = s.lower_bound(pi);
        auto r = s.upper_bound(pi);
        if(*l > pi) --l;
        if(*r < pi) ++r;

        auto f = m.find(*r - *l);
        if(f != m.end()) m.erase(f);
        m.insert(pi - *l);
        m.insert(*r - pi);
        s.insert(pi);
        printf("%d ",*--m.end());
    }
    return 0;
}
