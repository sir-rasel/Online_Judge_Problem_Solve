#include<bits/stdc++.h>
using namespace std;

vector<int>ans;

int nod(int n){
    int counter,nod=1;
    int k=sqrt(n+1);
    for(int i=2;i<=sqrt(n+1);i++){
        if(n%i==0){
            counter=0;
            while(n%i==0){
                counter++;
                n/=i;
            }
            nod*=(counter+1);
        }
    }
    if(n!=1) nod*=2;
    return nod;
}

bool isprime(int n){
    int sq=sqrt(n);
    for(int i=2;i<=sq;i++)
        if(n%i==0) return false;
    return true;
}

void precal(){
    for(int i=2;i<=10001;i++)
        if(isprime(nod(i))) ans.push_back(i);
}

int main(){
    precal();
    int test;
    scanf("%d",&test);
    vector<int>res;
    while(test--){
        res.clear();
        int l,r;
        scanf("%d %d",&l,&r);
        for(int i=0;i<ans.size() and ans[i]<=r;i++)
            if(ans[i]>=l) res.push_back(ans[i]);
        if(res.size()==0) printf("-1\n");
        else{
            for(int i=0;i<res.size();i++){
                if(i+1==res.size()) printf("%d\n",res[i]);
                else printf("%d ",res[i]);
            }
        }
    }
    return 0;
}
