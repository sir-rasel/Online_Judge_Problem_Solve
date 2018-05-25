#include <bits/stdc++.h>
using namespace std;

int main(){
    int h,w,n,total=0,large=0,lind=-1;
    scanf("%d",&n);
    vector<int>hig,wid,hie;
    for(int i=0;i<n;i++){
        scanf("%d %d",&w,&h);
        total+=w;
        wid.push_back(w);
        hig.push_back(h);
        hie.push_back(h);
        if(h>large){
            large=h;
            lind=i;
        }
    }
    sort(hie.begin(),hie.begin()+n);
    for(int i=0;i<n;i++){
        long long int res;
        if(i!=lind){
            res=(total-wid[i])*large;
        }
        else{
            int big=hie[hie.size()-2];
            res=(total-wid[i])*big;
        }
        printf("%lld ",res);
    }
    printf("\n");
    return 0;
}

