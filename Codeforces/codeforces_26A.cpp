#include<bits/stdc++.h>
using namespace std;

const int maxx = 3010;

vector<int>almostPrime;

bool primeDivisor(int n){
    int count=0;
    for(int i=2;i<=n;i++){
        if(n%i==0){
            count++;
            while(n%i==0) n/=i;
        }
         if(count>2) return false;
    }
    if(count==2) return true;
    else return false;
}

void preCalculate(){
    for(int i=4;i<maxx;i++)
        if(primeDivisor(i)) almostPrime.push_back(i);
}

int main(){
    preCalculate();
    int n;
    scanf("%d",&n);
    int ans=0;
    for(int i=0;almostPrime[i]<=n;i++) ans++;
    printf("%d\n",ans);
    return 0;
}
