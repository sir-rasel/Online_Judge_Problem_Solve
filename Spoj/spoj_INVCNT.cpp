#include<bits/stdc++.h>
using namespace std;

typedef long long int LL;

LL merge(int a[],int l,int mid,int r,int temp[]){
   LL ans=0;
   int i,j,k;

   j=mid+1;
   for(k=l ; k<=mid ; ++k){
      while(j<=r){
         if(a[k]>a[j])
            j++;
         else
            break;
      }
      ans += j-(mid+1);
   }

   i = l;
   k = l;
   j = mid+1;

   while(i<=mid && j<=r){
      if(a[i]<a[j])
         temp[k++] = a[i++];
      else
         temp[k++] = a[j++];
   }

   while(i<=mid)
      temp[k++] = a[i++];
   while(j<=r)
      temp[k++] = a[j++];
   for(k=l ; k<=r ; ++k)
      a[k] = temp[k];

   return ans;
}

LL mergeSort(int a[],int l,int r,int temp[]){
   if(l==r) return 0;
   int mid = (l+r)/2;
   LL lc,rc,mc;
   lc = mergeSort(a,l,mid,temp);
   rc = mergeSort(a,mid+1,r,temp);
   mc = merge(a,l,mid,r,temp);

   return lc+mc+rc;
}

int main(){
    int test;
    scanf("%d",&test);
    while(test--){
        int n;
        scanf("%d",&n);
        int arr[n+5],temp[n+5];
        for(int i=0;i<n;i++) scanf("%d",&arr[i]);
        LL inversion = mergeSort(arr,0,n-1,temp);
        printf("%lld\n",inversion);
    }
    return 0;
}
