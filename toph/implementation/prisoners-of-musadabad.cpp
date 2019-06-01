#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, in;
    scanf("%d", &n);
    map <int, int> m;
    while (n--) {
        scanf("%d", &in);
        m[in]++;
    }
    scanf("%d", &n);
    while (n--){
        scanf("%d", &in);
        m[in]>1?puts("Yes"):puts("No");
    }
    return 0;
}
