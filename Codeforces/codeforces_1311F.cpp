#include <bits/stdc++.h>
using namespace std;

long long get(vector<long long> &f, int pos) {
	long long res = 0;
	for (; pos >= 0; pos = (pos & (pos + 1)) - 1)
		res += f[pos];
	return res;
}

void upd(vector<long long> &f, int pos, int val) {
	for (; pos < int(f.size()); pos |= pos + 1) {
		f[pos] += val;
	}
}

int main() {
	int n;
	cin >> n;
	vector<pair<int, int>> p(n);
	for (auto &pnt : p) cin >> pnt.first;
	for (auto &pnt : p) cin >> pnt.second;
	sort(p.begin(), p.end());

	vector<int> vs;
	for (auto &pnt : p) vs.push_back(pnt.second);
	sort(vs.begin(), vs.end());
	vs.resize(unique(vs.begin(), vs.end()) - vs.begin());

	long long ans = 0;
	vector<long long> cnt(vs.size()), xs(vs.size());
	for (auto &pnt : p) {
		int pos = lower_bound(vs.begin(), vs.end(), pnt.second) - vs.begin();
		ans += get(cnt, pos) * 1ll * pnt.first - get(xs, pos);
		upd(cnt, pos, 1);
		upd(xs, pos, pnt.first);
	}

	cout << ans << endl;

	return 0;
}

//#include <bits/stdc++.h>
//#include <ext/pb_ds/tree_policy.hpp>
//#include <ext/pb_ds/assoc_container.hpp>
//
//using namespace std;
//using namespace __gnu_pbds;
//
//typedef
//tree<
//	pair<int, int>,
//	null_type,
//	less<pair<int, int>>,
//	rb_tree_tag,
//	tree_order_statistics_node_update>
//ordered_set;
//
//int main() {
//	int n;
//	cin >> n;
//	vector<pair<int, int>> p(n);
//	for (auto &pnt : p) cin >> pnt.first;
//	for (auto &pnt : p) cin >> pnt.second;
//	sort(p.begin(), p.end());
//
//	ordered_set s;
//	long long ans = 0;
//	for (int i = 0; i < n; ++i) {
//		int cnt = s.order_of_key(make_pair(p[i].second + 1, -1));
//		ans += cnt * 1ll * p[i].first;
//		s.insert(make_pair(p[i].second, i));
//	}
//	s.clear();
//	for (int i = n - 1; i >= 0; --i) {
//		int cnt = int(s.size()) - s.order_of_key(make_pair(p[i].second - 1, n));
//		ans -= cnt * 1ll * p[i].first;
//		s.insert(make_pair(p[i].second, i));
//	}
//
//	cout << ans << endl;
//
//	return 0;
//}
