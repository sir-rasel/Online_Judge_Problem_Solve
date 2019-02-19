#include<bits/stdc++.h>
#define MAXN 100005
using namespace std;

int BIT[MAXN];
int arr[MAXN],n,q;

void update(int idx,int value){
    while(idx<=n){
        BIT[idx]+=value;
        idx+=(idx&-idx);
    }
}

int query(int idx){
    int sum=0;
    while(idx>0){
        sum+=BIT[idx];
        idx-=(idx&-idx);
    }
    return sum;
}

int main(){
    int test,cs=1;
    scanf("%d",&test);
    while(test--){
        memset(BIT,0,sizeof(BIT));
        scanf("%d %d",&n,&q);
        for(int i=1;i<=n;i++){
            scanf("%d",&arr[i]);
            update(i,arr[i]);
        }
        printf("Case %d:\n",cs++);
        while(q--){
            int type;
            scanf("%d",&type);
            if(type==1){
                int idx;
                scanf("%d",&idx);
                idx++;
                update(idx,-arr[idx]);
                printf("%d\n",arr[idx]);
                arr[idx]=0;
            }
            else if(type==2){
                int idx,value;
                scanf("%d %d",&idx,&value);
                idx++;
                update(idx,value);
                arr[idx]+=value;
            }
            else {
                int i,j;
                scanf("%d %d",&i,&j);
                i++,j++;
                printf("%d\n",(query(j)-query(i))+arr[i]);
            }
        }
    }
    return 0;
}
