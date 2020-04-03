#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    int test;
    scanf("%d",&test);
    while(test--){
        int n,x;
        scanf("%d %d",&n,&x);
        int ans=0;
        map<int,bool>check;
        for(int i=0;i<n;i++){
            int num;
            scanf("%d",&num);
            check[num]=true;
        }
        int t=x;
        for(int i=1;i<=(n+x);i++){
            if(check.count(i)==0 and t>0) {
                t--;
                ans = i;
            }
            else if(check.count(i)==1) ans=i;
            else break;
        }
        printf("%d\n",ans);
    }
    return 0;
}
