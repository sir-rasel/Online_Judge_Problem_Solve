#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n,a,b,f,lf,r,l;
    int test;
    scanf("%d",&test);
    while(test--){
        cin>>n>>a>>b;
        if(a>b)swap(a,b);

        if(b==a+1 or (a==1 and b==n)) lf=1;
        else lf=0;

        if(lf){
            f=(n-3)*(n-4);
        }
        else f=(n-4)*(n-4);
        f-=max(0LL,b-a-3)+max(0LL,a+n-b-3);
        cout<<f<<'\n';
    }
    return 0;
}
