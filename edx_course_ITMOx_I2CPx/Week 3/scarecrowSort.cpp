#include<cstdio>
#include<algorithm>
using namespace std;

int a[1000005],b[1000005];

int main(){
   freopen("input.txt","r",stdin);
   freopen("output.txt","w",stdout);

   int n,k;
   scanf("%d %d",&n,&k);
   for(int i=0;i<n;i++) scanf("%d",&a[i]);
   for(int i=0;i<n;i++){
      int last = 0;
      for(int j=i;j<n;j+=k) b[last++]=a[j];
      sort(b,b+last);
      for(int j=i,t=0;j<n;j+=k,t++) a[j]=b[t];
   }
   bool flag=true;
   for(int i=0;i<n && flag;i++){
      if (a[i - 1] > a[i])
         flag = false;
   }
   if(flag) printf("YES\n");
   else printf("NO\n");
   return 0;
}
