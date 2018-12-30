#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

ll a[100010];
ll cum[100010];

int main(){
    int test,cs=1;
    scanf("%d",&test);
    while(test--){
        int n,q;
        scanf("%d %d",&n,&q);
        ll sum=0;
        for(int i=1;i<=n;i++){
            scanf("%lld",&a[i]);
            sum+=a[i];
            cum[i]=sum;
        }
        sum=0;
        for(int j=1;j<n;j++)
            sum+=(ll)( (ll) (a[j]*(n-j))-(ll) (cum[n]-cum[j])  );

        printf("Case %d:\n",cs++);
        for(int i=1;i<=q;i++){
            int x;
            scanf("%d",&x);
            if(x==0){
                int p,q;
                scanf("%d %d",&p,&q);
                p++;
                ll diff=q-a[p];
                if(fabs(diff)>0){
                    sum+=(ll) ( diff*(n-p) );
                    sum+=(ll) ( (a[p]-q)*(p-1) );
                    a[p]=q;
                }
            }
            else cout<<sum<<endl;
        }
    }
    return 0;
}
