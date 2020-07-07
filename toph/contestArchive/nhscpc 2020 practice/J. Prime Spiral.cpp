#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

const int mod = 1e9+7;
const int Max = 2e7;
bool mark[Max];

vector<int>prime;

void sieve(){
    for(int i=4;i<Max;i+=2) mark[i]=true;
    for(int i=3;i*i<=Max;i+=2)
        if(!mark[i])
            for(int j=i*i;j<Max;j+=2*i)
                mark[j]=true;

    for(int i=2;i<Max;i++)
        if(!mark[i])
            prime.push_back(i);
}

int DetectNumber(int n,int i,int j){
    int level = n/2;
    if (n%2==0) j++;

    int pos = max(abs(i-(n/2+1)),abs(j-(n/2+1)));
    int number = (2*pos)*(2*pos)+1;
    i -= (level-pos), j-= (level-pos);

    if(j>i) number = (number-i-j+2);
    else number = (number+i+j-2);

    return number;
}


int main(){
    sieve();
    int n,q;
    scanf("%d %d",&n,&q);
    while(q--){
        int i,j;
        scanf("%d %d",&i,&j);

        int p = DetectNumber(n,i,j);
        printf("%d\n",prime[p-1]);
    }
    return 0;
}
