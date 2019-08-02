#include <bits/stdc++.h>
#define MAX 90000000
using namespace std;

bool arr[MAX];
vector<int>prime;

void sieve(){
    int k=sqrt(MAX);
    for(int i=3;i<=k;i+=2)
        if(!arr[i])
            for(int j=i*i;j<MAX;j+=2*i)
                arr[j]=true;

    prime.push_back(0);
    prime.push_back(2);
    for(int i=3;i<MAX;i+=2)
        if(!arr[i])
            prime.push_back(i);
}

int main(){
    sieve();
    int test;
    scanf("%d",&test);
    while(test--){
        int n;
        scanf("%d",&n);
        printf("%d\n",prime[n]);
    }
    return 0;

}
