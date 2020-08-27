#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int, int> pii;

const int MAX_N = 1e5 + 10;

int v;
int n1;
pii val1[MAX_N];
int n2;
pii val2[MAX_N];

void input(){
	int n;
	scanf("%d %d", &n, &v);
	for(int i=0;i<n;i++){
		int cap, cost;
		scanf("%d %d", &cap, &cost);
		if(cap == 1)
			val1[n1++] = pii(cost, i + 1);
		else
            val2[n2++] = pii(cost, i + 1);
	}
}

int ans1, ans2, maxa;

int main(){
	input();
	sort(val1, val1 + n1);
	reverse(val1, val1 + n1);
	sort(val2, val2 + n2);
	reverse(val2, val2 + n2);
	int last1 = 0;
	int last2 = 0;
	int sum = 0, cap = 0;
	for(int i = 0; i<n1; i++)
		if(cap + 1 <= v){
			cap++;
			sum += val1[i].first;
			last1 = i + 1;
		}
	while(last2 < n2 && cap + 2 <= v){
		sum += val2[last2++].first;
		cap += 2;
	}
	maxa = sum;
	ans1 = last1;
	ans2 = last2;
	for(int i = last1 - 1; i >= 0; i--){
		sum -= val1[i].first;
		cap--;
		while(last2 < n2 && cap + 2 <= v){
			sum += val2[last2++].first;
			cap += 2;
		}
		if(sum > maxa){
			maxa = sum;
			ans1 = i;
			ans2 = last2;
		}
	}
	printf("%d\n", maxa);
	for(int i=0;i<ans1;i++)
		printf("%d ", val1[i].second);
	for(int i=0;i<ans2;i++)
		printf("%d ", val2[i].second);
	printf("\n");

	return 0;
}

