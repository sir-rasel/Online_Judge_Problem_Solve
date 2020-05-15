#include <bits/stdc++.h>
using namespace std;

const int N = 200'005;

int n, k;
int p[N];
bool used[N];

void solve(int test_id) {
    vector<pair<int, int>> two_node_cycles;
    vector<tuple<int, int, int>> answer;

    cin >> n >> k;
    for (int i = 1; i <= n; ++i)
        cin >> p[i];

    for (int i = 1; i <= n; ++i)
        used[i] = false;

    for (int i = 1; i <= n; ++i)
        if (!used[i]) {
            vector<int> cycle;
            int j = i;
            while (!used[j]) {
                used[j] = true;
                cycle.push_back(j);
                j = p[j];
            }
            while (cycle.size() > 2) {
                int z = cycle.back();
                cycle.pop_back();
                int y = cycle.back();
                cycle.pop_back();
                int x = cycle.back();
                if (cycle.size() == 1)
                    cycle.pop_back();
                answer.push_back(tie(x, y, z));
                --k;
            }
            if (cycle.size() == 2) {
                two_node_cycles.push_back(make_pair(cycle[0], cycle[1]));
            }
        }
    while (two_node_cycles.size() > 1) {
        pair<int, int> fir = two_node_cycles.back();
        two_node_cycles.pop_back();
        pair<int, int> sec = two_node_cycles.back();
        two_node_cycles.pop_back();

        answer.push_back(tie(fir.second, sec.first, sec.second));
        answer.push_back(tie(fir.first, fir.second, sec.first));
        k -= 2;
    }
    if (!two_node_cycles.empty())
        k = -1;

    if (k < 0)
        cout << "-1\n";
    else {
        cout << answer.size() << '\n';
        for (int i = 0; i < answer.size(); ++i) {
            cout << get<0>(answer[i]) << " "
                 << get<1>(answer[i]) << " "
                 << get<2>(answer[i]) << '\n';
        }
    }
    return;
}

int main(int argc, const char * argv[]) {
    int tests;
    cin >> tests;
    for (int i = 0; i < tests; ++i)
        solve(i);
    return 0;
}
