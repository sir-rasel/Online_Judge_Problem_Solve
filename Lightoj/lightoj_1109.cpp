#include <bits/stdc++.h>
using namespace std;

pair<int,int>myPair[1002];

int nod(int n){
    int count=1;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            int temp=0;
            while(n%i==0){
                n/=i;
                temp++;
            }
            count*=(temp+1);
        }
    }
    if(n!=1) count*=2;
    return count;
}

bool comp(pair<int,int>a,pair<int,int>b){
    if(a.second<b.second) return true;
    if(a.second>b.second) return false;
    if(a.first>b.first) return true;
    return false;
}

void precalculate(){
    for(int i=1;i<=1000;i++){
        myPair[i].first=i;
        myPair[i].second=nod(i);
    }
    sort(myPair,myPair+1001,comp);
}

int main(){
    precalculate();
    int test;
    scanf("%d",&test);
    for(int i=1;i<=test;i++){
        int number;
        scanf("%d",&number);
        printf("Case %d: %d\n",i,myPair[number].first);
    }
    return 0;
}
