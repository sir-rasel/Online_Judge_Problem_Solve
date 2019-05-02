#include <bits/stdc++.h>
#define LL long long int
using namespace std;

int main(){
    LL A, B, C;
    cin >> A >> B >> C;
    if(A >= B && A <= C) printf("Chocolate\n");
    else if(A <= B && A >= C or (A > C && A < B)) printf("Ice-cream\n");
    else printf("Chocolate\n");
    return 0;
}
