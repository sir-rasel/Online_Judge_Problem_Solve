#include <cstdio>
using namespace std;

int arr[200000],tmp[200000],n;

void merging(int s,int mid,int e){
    int i=s,j=mid,k=0;
    while(i<mid && j<e){
        if(arr[i]<=arr[j])
            tmp[k++]=arr[i++];
        else tmp[k++]=arr[j++];
    }
    while(i<mid) tmp[k++]=arr[i++];
    while(j<e) tmp[k++]=arr[j++];
    for(int i=s;i<e;i++) arr[i]=tmp[i-s];
}

void mergeSort(int s,int e){
    if(e-s<=1) return;
    int mid = (s+e) >> 1;
    mergeSort(s,mid);
    mergeSort(mid,e);
    merging(s,mid,e);
    printf("%d %d %d %d\n",s+1,e,arr[s],arr[e-1]);
}

int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    mergeSort(0,n);
    for(int i=0;i<n;i++){
        if(i+1==n) printf("%d\n",arr[i]);
        else printf("%d ",arr[i]);
    }
    return 0;
}
