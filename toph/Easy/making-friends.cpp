#include<bits/stdc++.h>
#define MX 1000005
using namespace std;

int NumberOfDivisor(int n){
    int ans=1;
    for(int i=2;i<=sqrt(n);i++){
        int counter=0;
        while(n%i==0){
            counter++;
            n/=i;
        }
        ans*=(counter+1);
    }
    if(n!=1) ans*=2;
    return ans;
}

int main(){
    int n;
    scanf("%d",&n);
    printf("%d\n",NumberOfDivisor(n)-1);
    return 0;
}
