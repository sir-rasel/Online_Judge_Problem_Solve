#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
vector<int>prime;
map<int,bool>check;

void factorize(int n){
    for(int i=2;i<sqrt(n);i++){
        if(n%i==0){
            if(check.count(i)==0){
                prime.push_back(i);
                check[i]=true;
            }
            while(n%i==0) n/=i;
        }
    }
    if(n>1)
        if(check.count(n)==0){
            prime.push_back(n);
            check[n]=true;
        }
}

int main(){
    int test;
    scanf("%d",&test);
    while(test--){
        int n;
        scanf("%d",&n);
        vector<int>arr(n);

        prime.clear();
        check.clear();

        for(int i=0;i<n;i++) {
            scanf("%d",&arr[i]);
            factorize(arr[i]);
        }
        sort(prime.begin(),prime.end());

        vector<int>ans(n,0);
        int color=1,maxx=1;
        for(int i=0;i<prime.size();i++){
            for(int j=0;j<n;j++){
                if(arr[j]%prime[i]==0 and ans[j]==0){
                    ans[j]=color;
                    maxx=color;
                }
            }
            color=maxx+1;
        }
        printf("%d\n",color-1);
        for(int i=0;i<n;i++){
            if(i+1==n) printf("%d\n",ans[i]);
            else printf("%d ",ans[i]);
        }
    }
    return 0;
}
