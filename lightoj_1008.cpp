#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int test;
    scanf("%lld",&test);
    for(long long int i=1;i<=test;i++){
        long long int n;
        scanf("%lld",&n);
        long long int root = ceil(sqrt(n)),x,y;
        long long int delema = (root*root)-n;
        if(delema<root){
            y=root;
            x=delema+1;
        }
        else{
            x=root;
            y=n-(root-1)*(root-1);
        }
        if(root%2==0){
            swap(x,y);
        }
        printf("Case %lld: %lld %lld\n",i,x,y);
    }
    return 0;
}
