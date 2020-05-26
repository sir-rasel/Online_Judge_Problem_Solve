#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

int main(){
    int n;
    scanf("%d",&n);
    vector<int>a(n-1);
    for(int i=0;i<n-1;i++) scanf("%d",&a[i]);
    sort(a.begin(),a.end());

    int l = 1,r = n-1;
    while(l<=r){
        int mid = (l+r)/2;
        if(a[mid-1]==mid) l = mid+1;
        else r = mid-1;
    }
    printf("%d\n",l);
    return 0;
}
