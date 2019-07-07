#include <bits/stdc++.h>
using namespace std;

vector<int> order;
map<int, int> freq;

int main() {
	int n;
	while (scanf("%d", &n) != EOF) {
		if (freq.count(n) == 0) {
			freq[n]++;
			order.push_back(n);
		}
        else freq[n]++;
	}
	for(int i=0;i<(int)order.size();i++)
		printf("%d %d\n",order[i], freq[order[i]]);
	return 0;
}
