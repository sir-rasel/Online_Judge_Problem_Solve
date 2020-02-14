#include<cstdio>
#include<algorithm>
using namespace std;

int arr[1000005];

int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++) arr[i]=i+1;

    for(int i=2;i<n;i++) swap(arr[i/2],arr[i]);
    for(int i=0;i<n;i++) {
        if(i+1==n) printf("%d\n",arr[i]);
        else printf("%d ",arr[i]);
    }
    return 0;
}
