#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

int main(){
    int n;
    scanf("%d",&n);
    vector<int>arr(n+1);
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    arr[n] = arr[n-1];

    ll ans = 0;
    map<int,int>counter;
    for(int i=0,j=0;i<=n;i++){
        counter[arr[i]]++;
        if(counter[arr[i]]>1){
            ll s = (i-j);
            while(counter[arr[i]]>1){
                counter[arr[j++]]--;
            }
            ll rem = (i-j);
            ll subSegment = (s*(s+1))/2 - (rem*(rem+1))/2;
            ans += subSegment;
        }
    }
    printf("%lld\n",ans);

    return 0;
}
