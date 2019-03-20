#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#include<bits/stdc++.h>
using namespace std;
using namespace __gnu_pbds;

typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update>ordered_set;

ordered_set X;
map<int,int>mp;

int main(){
    int n;
    scanf("%d",&n);
    int x,totalData=n;
    while(scanf("%d",&x)!=EOF){
        if(x==1){
            totalData++;
            n++;
        }
        else if(x==4) printf("%d\n",totalData);
        else if(x==2){
            int y;
            scanf("%d",&y);
            if(y>n) printf("No data found\n");
            else{
                if(mp[y]==1) printf("No data found\n");
                else{
                    X.insert(y);
                    mp[y]=1;
                    totalData--;
                }
            }
        }
        else{
            int y;
            scanf("%d",&y);
            int lo=1,hi=n,mid,ans;
            while(lo<=hi){
                mid=(lo+hi)/2;
                int ind1=X.order_of_key(mid);
                int ind2=X.order_of_key(mid+1);
                if(ind1!=ind2) ind1++;
                if((mid-ind1)>=y){
                    ans=mid;
                    hi=mid-1;
                }
                else lo=mid+1;
            }
            printf("%d\n",ans);
        }
    }
    return 0;
}
