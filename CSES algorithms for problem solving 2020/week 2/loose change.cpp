#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

const int mod = 1e9+7;
const int Max = 1000;
const ll limit = 1e9;
const double eps = 1e-4;

int main(){
    int n;
    scanf("%d",&n);
    vector<int>a(n);
    for(int i=0;i<n;i++) scanf("%d",&a[i]);

    sort(a.begin(),a.end());
    ll preSum = 0;
    for(int i=0;i<n;i++){
        if(a[i]>preSum+1)
            break;
        preSum+=a[i];
    }
    printf("%lld\n",preSum+1);

    return 0;
}
