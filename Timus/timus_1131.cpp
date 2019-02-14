#include<bits/stdc++.h>
using namespace std;

int calculate(int n,int k){
    int res=0,i;
    for(i=1;i<k and i<n and 2*i<k and 2*i<n;i*=2) res++;
    if(i<n){
        i*=2;
        res++;
        n-=i;
        if(n>0){
            int div = n/k;
            res+=div;
            n-=(div*k);
            if(n>0) res++;
        }
    }
    return res;
}

int main(){
    int n,k;
    cin>>n>>k;
    cout<<calculate(n,k)<<endl;
    return 0;
}
