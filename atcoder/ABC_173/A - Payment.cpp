#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

const int mod = 1e9+7;
const int Max = 2e8;
const double eps = 1e-4;

int main(){
    int n;
    scanf("%d",&n);
    int t = ceil(n/1000.0);
    int ans = (t*1000)-n;
    printf("%d\n",ans);
    return 0;
}
