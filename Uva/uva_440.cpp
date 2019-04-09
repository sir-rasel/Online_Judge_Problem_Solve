#include<bits/stdc++.h>
using namespace std;

int Calu(int n, int k) {
	static int link[151], head, prev, last;
	for(int i = 2; i < n; i++) link[i] = i+1;
	link[n] = 2, head = 2, prev = n;
	for(int i = 1; i < n; i++) {
		for(int j = 1; j < k; j++)
			prev = head, head = link[head];
		last = head;
		link[prev] = link[head];
		head = link[head];
	}
	if(last == 2) return 1;
	return 0;
}

int main() {
	int D[150], N, counter;
	for(int i = 3; i < 150; i++) {
		counter = 2;
		while(Calu(i, counter) == 0)	counter++;
		D[i] = counter;
	}
	while(scanf("%d", &N) == 1 && N) {
		printf("%d\n", D[N]);
	}
    return 0;
}
