#include <bits/stdc++.h>
using namespace std;

int main() {
	int test;
	scanf("%d",&test);
	while (test--) {
		int n;
		scanf("%d",&n);
		vector<int> a(n+5);
		for (int i=0;i<n;i++) scanf("%d",&a[i]);

		int l = 0, r = n - 1;
		int leftSum = 0, rightSum = 0;
		int turn = 0, ansleft = 0, ansright = 0;

		while (l <= r) {
			if (turn % 2 == 0) {
				int newleftSum = 0;
				while (l <= r && newleftSum <= rightSum) {
					newleftSum += a[l++];
				}
				ansleft += newleftSum;
				leftSum = newleftSum;
			}
			else {
				int newRightSum = 0;
				while (l <= r && newRightSum <= leftSum) {
					newRightSum += a[r--];
				}
				ansright += newRightSum;
				rightSum = newRightSum;
			}
			++turn;
		}
		printf("%d %d %d\n",turn,ansleft,ansright);
	}
	return 0;
}
