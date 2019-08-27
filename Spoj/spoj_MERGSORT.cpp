#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
const int maxx = 100005;

void merge(int a[],int l,int mid,int r,int temp[]){
    int i,j,k;
    i = l;
    k = l;
    j = mid+1;
    while(i<=mid && j<=r){
        if(a[i]<a[j])
            temp[k++] = a[i++];
        else
            temp[k++] = a[j++];
    }

    while(i<=mid){
        temp[k++] = a[i++];
    }
    while(j<=r){
        temp[k++] = a[j++];
    }
    for(k=l ; k<=r ; ++k)
        a[k] = temp[k];
}

void mergeSort(int a[],int l,int r,int temp[]){
    if(l==r) return;
    int mid = (l+r)/2;
    mergeSort(a,l,mid,temp);
    mergeSort(a,mid+1,r,temp);
    merge(a,l,mid,r,temp);
}

int main(){
    int arr[maxx],temp[maxx];
    int i=0;
    while(scanf("%d",&arr[i++])!=EOF);
    mergeSort(arr,0,i-1,temp);
    for(int j=1;j<i;j++){
        if(j==i-1) printf("%d\n",arr[j]);
        else printf("%d ",arr[j]);
    }
    return 0;
}
