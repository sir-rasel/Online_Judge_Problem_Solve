#include <bits/stdc++.h>
#define MAX 100000005
using namespace std;

bool arr[MAX];
vector<int>prime;
int cal[MAX];

void sieve(){
    int k=sqrt(MAX);
    for(int i=3;i<=k;i+=2)
        if(!arr[i])
            for(int j=i*i;j<MAX;j+=2*i)
                arr[j]=true;

    prime.push_back(2);
    for(int i=3;i<MAX;i+=2)
        if(!arr[i])
            prime.push_back(i);

    int idx=0;
    cal[0]=0;
    for(int i=1;i<MAX;i++){
        if(prime[idx]==i) idx++;
        cal[i]=idx;
    }
}

int main(){
    sieve();
    int x;
    while(scanf("%d",&x) and x){
        double ans = ( abs( (double)cal[x]-((double)x/log(x*1.0)) )/(double)cal[x] )*100.0;
        printf("%.1lf\n",ans);
    }
    return 0;
}
