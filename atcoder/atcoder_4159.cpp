#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

ll digitSum(int n){
    ll sum=0;
    while(n){
        sum+=(n%10);
        n/=10;
    }
    return sum;
}

int main(){
    int n;
    scanf("%d",&n);
    if(n%digitSum(n)==0) printf("Yes\n");
    else printf("No\n");
    return 0;
}
