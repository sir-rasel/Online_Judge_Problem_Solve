#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

int main(){
    int n,x;
    scanf("%d %d",&n,&x);
    vector<int>a(n);
    for(auto &it:a) scanf("%d",&it);
    sort(a.begin(),a.end());

    int ans = 0,i=0,j=n-1;
    while(i<j){
        if(a[i]+a[j]>x) j--;
        else if((a[i]+a[j])<=x) i++,j--;
        ans++;
    }
    if(i==j) ans++;
    printf("%d\n",ans);
    return 0;
}
