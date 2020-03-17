#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    if (n==2) {
        cout<<0<<endl;
        return 0;
    }
    pair<int, int> edges[n];
    vector<int> v[n];
    map<pair<int, int>, int> mp;

    int a, b;
    for (int i = 0; i < n-1; ++i) {
        cin>>a>>b;
        a--;
        b--;
        v[a].push_back(b);
        v[b].push_back(a);
        edges[i] = make_pair(min(a,b), max(a,b));
        mp[edges[i]] = i;
    }

    int insertNode = 0;
    int visited[n];
    memset(visited, 0, sizeof(visited));

    map<int, int> valueInIndex;

    for (int i = 0; i < n; ++i) {
        if (v[i].size()==1) {
            a = i;
            b = v[i][0];
            int index = mp[make_pair(min(a, b), max(a, b))];
            visited[index] = 1;
            valueInIndex[index] = insertNode;
            insertNode++;
        }
    }

    for (int i = 0; i < n-1; ++i) {
        if (visited[i]==0) {
            cout<<insertNode<<endl;
            insertNode++;
        }
        else {
            cout<<valueInIndex[i]<<endl;
        }
    }
}
