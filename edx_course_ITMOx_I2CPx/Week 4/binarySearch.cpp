#include<cstdio>
#include<algorithm>
using namespace std;

int arr[100005];

int main(){
    freopen("input.tx","r",stdin);
    freopen("output.txt","w",stdout);

    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    int m;
    scanf("%d",&m);
    while(m--){
        int num;
        scanf("%d",&num);
        int f = lower_bound(arr,arr+n,num)-arr;
        int l = upper_bound(arr,arr+n,num)-arr;

        if(arr[f]!=num || arr[l-1]!=num) printf("-1 -1\n");
        else printf("%d %d\n",f+1,l);
    }
    return 0;
}
