#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef pair<int, int> pi;
typedef multimap<pi, int> mpii;
typedef priority_queue<pi, vector<pi>, greater<pi> > pq;

int main(){
    int n, k = 0;
    scanf("%d",&n);
    mpii m;
    for (int i = 0; i < n; i++){
        int a, b;
        scanf("%d %d",&a,&b);
        m.insert(make_pair(make_pair(a, b), i));
    }
    pq q;
    vi v(n);
    for (auto it = m.begin(); it != m.end(); it++){
        int a, b, c;
        tie(a, b) = it->first;
        if (q.empty() || q.top().first >= a)
            c = ++k;
        else{
            c = q.top().second;
            q.pop();
        }
        q.push(make_pair(b, c));
        v[it->second] = c;
    }

    printf("%d\n",k);
    for (int i = 0; i < n; i++){
        if (i == n - 1) printf("%d\n",v[i]);
        else printf("%d ",v[i]);
    }

    return 0;
}
