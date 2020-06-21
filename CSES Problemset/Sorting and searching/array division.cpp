#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

vector<int>arr;
int n,k;

bool check(ll mid){
    int count = 1;
    ll sum = 0;
    for(int i=0;i<n;i++){
        if(sum+arr[i]<=mid) sum+=arr[i];
        else{
            count++;
            sum = arr[i];
        }

        if(count>k) return false;
    }

    return count<=k;
}

ll binarySearch(ll l,ll h){
    while(l<=h){
        ll mid = l+(h-l)/2;

        if(check(mid)) h = mid-1;
        else l = mid+1;
    }
    return l;
}

int main(){
    scanf("%d %d",&n,&k);
    int ans = 0;

    ll sum = 0;
    for(int i=0;i<n;i++){
        int num;
        scanf("%d",&num);
        sum+=num;
        ans = max(ans,num);
        arr.push_back(num);
    }

    printf("%lld\n",binarySearch((ll)ans,sum));
    return 0;
}
