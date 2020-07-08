#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

const int mod = 1e9+7;
const int Max = 1000;
const ll limit = 1e9;
const double eps = 1e-4;

int hIndex(vector<int>& cit) {
    priority_queue<int, vector<int>, greater<int> > pq(begin(cit), end(cit));
    while (!pq.empty() && pq.top() < pq.size())
        pq.pop();
    return pq.size();
}

int main(){
    int n;
    scanf("%d",&n);
    vector<int>a(n);
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    printf("%d\n",hIndex(a));
    return 0;
}
