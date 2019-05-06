#include <bits/stdc++.h>
#define mxn 5005
using namespace std;

char S[mxn];
int n;

int main() {
    scanf("%d", &n);
    int ans = 0;
    for (int i = 0; i < n; i++) {
        scanf("%s", S);
        int len = strlen(S);
        S[len+15] = S[len];
        for (int j = 0; j < 15; j++) S[j+len] = S[j];
        string str(S);
        int mnidx = 0;
        for (int j = 1; j < len; j++) {
            for (int k = 0; k < 15; k++) {
                if (S[mnidx+k]<S[j+k]) break;
				else if (S[j+k]<S[mnidx+k]) {
                    mnidx = j;
                    break;
                }
            }
        }
        for (int j = 0; j < 15; j++) ans += S[mnidx+j]-'a'+1;
    }
    printf("%d\n", ans);
    return 0;
}
