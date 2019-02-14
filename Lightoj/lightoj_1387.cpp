#include <bits/stdc++.h>
using namespace std;

int main(){
    int test;
    scanf("%d",&test);
    for(int i=1;i<=test;i++){
        int n;
        printf("Case %d:\n",i);
        scanf("%d",&n);
        long long int sum=0;
        while(n--){
            string s;
            int don;
            cin>>s;
            if(s=="donate") {
                scanf("%d",&don);
                sum+=don;
            }
            else printf("%lld\n",sum);
        }
    }
    return 0;
}
