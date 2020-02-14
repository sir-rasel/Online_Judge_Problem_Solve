#include <cstdio>
using namespace std;

int n,a[1000005],tmp[1000005];
typedef long long int LL;

LL merge(int l,int mid,int r){
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
         tmp[k++] = a[i++];
      else
         tmp[k++] = a[j++];
   }

   while(i<=mid)
      tmp[k++] = a[i++];
   while(j<=r)
      tmp[k++] = a[j++];
   for(k=l ; k<=r ; ++k)
      a[k] = tmp[k];

   return ans;
}

LL mergeSort(int l,int r){
   if(l==r) return 0;
   int mid = (l+r)/2;
   LL lc,rc,mc;
   lc = mergeSort(l,mid);
   rc = mergeSort(mid+1,r);
   mc = merge(l,mid,r);
   return lc+mc+rc;
}

int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&a[i]);

    LL ans = mergeSort(0,n-1);
    printf("%lld\n",ans);
    return 0;
}
