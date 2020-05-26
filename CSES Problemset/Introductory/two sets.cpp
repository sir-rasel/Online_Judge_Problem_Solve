#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

int main(){
    ll n;
    scanf("%lld",&n);
    ll sum = (n*(n+1))/2;
    if(sum&1) printf("NO\n");
    else{
        printf("YES\n");
        sum/=2;
        ll temp = n;
        map<int,bool>check;
        vector<int>set1,set2;
        while(sum>0){
            if(sum>=temp){
                set1.push_back(temp);
                check[temp]=true;
                sum-=(temp--);
            }
            else {
                check[sum]=true;
                set1.push_back(sum);
                sum-=sum;
            }
        }
        for(int i=1;i<=n;i++){
            if(!check[i])
                set2.push_back(i);
        }
        printf("%d\n",set1.size());
        for(int i=set1.size()-1;i>=0;i--)
            printf("%d ",set1[i]);
        printf("\n");

        printf("%d\n",set2.size());
        for(int i=set2.size()-1;i>=0;i--)
            printf("%d ",set2[i]);
        printf("\n");
    }
    return 0;
}
