#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int arr[n+5];
    int sum=0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    sort(arr,arr+n,greater<int>());

    int counter=0;
    double p = (sum/(1.0*4*m));
    for(int i=0;i<n;i++){
        if(arr[i]>=p) counter++;
        if(counter==m) break;
    }

    if(counter==m) printf("Yes\n");
    else printf("No\n");

    return 0;
}
