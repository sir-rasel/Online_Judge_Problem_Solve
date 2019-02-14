#include<bits/stdc++.h>
using namespace std;

int x[23], a = 0, y[23], s = 1000000;

int sum(int n){
    int s1 = 0, s2 = 0;
    for(int i = 0; i < n; i++)
        if(x[i] == 1) s1 += y[i];
        else s2 += y[i];
    return abs(s1 - s2);
}
int main () {
    int n, v;
    cin >> n;
    for(int i = 0; i < n; i++) cin >> y[i];
    for(int i = 1; i < (1<<n); i++){
        v = i;
        a = 0;
        while(v > 0){
            x[a++] = v % 2;
            v /= 2;
        }
        s = min(s, sum(n));
    }
    cout << s;
}
