#include<bits/stdc++.h>
using namespace std;

const int mx = 10005;
bool prime[mx];

void sieve(){
    prime[0]=prime[1]=true;
    for(int i=2;i<mx;i+=2) prime[i]=true;
    for(int i=3;i*i<mx;i+=2)
        if(!prime[i])
            for(int j=i*i;j<mx;j+=2*i)
                prime[j]=true;
}

int main(){
    sieve();
    int test,cs=1,n;
    scanf("%d",&test);
    while(test--){
        string s;
        cin>>n>>s;
        int maxPrime=0;
        for(int i=0;i<n;i++){
            int num=0;
            for(int j=i;j<n;j++){
                num=(num*10)+(s[j]-'0');
                if(num>=mx) break;
                if(!prime[num] and maxPrime<num) maxPrime=num;
            }
        }
        printf("Case %d: ",cs++);
        if(maxPrime) printf("%d\n",maxPrime);
        else printf("This is a junk!\n");
    }
    return 0;
}
