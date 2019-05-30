#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long int ull;

int main(){
    int n;
    scanf("%d",&n);
    ull ans=0;
    for(int i=0;i<n;i++){
        ull num;
        scanf("%llu",&num);
        ans+=(num-1);
    }
    printf("%llu\n",ans);
    return 0;
}
