#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

bool check(int n,int i){
    return (n&(1<<i))>0;
}

int main(){
    int test;
    scanf("%d",&test);
    while(test--){
        int n;
        scanf("%d",&n);
        int arr[n+5];
        for(int i=0;i<n;i++) scanf("%d",&arr[i]);
        arr[n]=0;

        ll ans = 0;
        for(int i=0;i<20;i++){
            int counter=0;
            ll sum = 0;
            for(int j=0;j<=n;j++){
                if(!check(arr[j],i)){
                    sum+=( ((ll)counter*(counter+1))/2 );
                    counter = 0;
                }
                else counter++;
            }
            ans += (ceil(pow(2,i))*sum);
        }
        printf("%lld\n",ans);
    }
    return 0;
}
