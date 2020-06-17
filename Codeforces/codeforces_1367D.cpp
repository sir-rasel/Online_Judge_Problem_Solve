#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

int main() {
    int test;
    scanf("%d",&test);
    while(test--) {
        string s;
        cin >> s;

        int n;
        scanf("%d",&n);

        vector<int> b(n);
        for(int i=0;i<n;i++) scanf("%d",&b[i]);

        vector<vector<int>> groups;
        while (true) {
            vector<int> pos;
            for(int i=0;i<n;i++)
                if (b[i] == 0) pos.push_back(i);

            if (pos.empty()) break;

            groups.push_back(pos);
            for(int i=0;i<n;i++)
                if (b[i] == 0)
                    b[i] = INT_MAX;
                else
                    for (int pp: pos)
                        b[i] -= abs(i - pp);
        }

        map<char, int> cnts;
        for(int i=0;i<s.size();i++)
            cnts[s[i]]++;

        auto j = cnts.rbegin();
        string t(n, '?');
        for (auto g: groups) {
            while (j->second < g.size()) j++;
            for (int pp: g)
                t[pp] = j->first;
            j++;
        }
        cout << t << endl;
    }
    return 0;
}
