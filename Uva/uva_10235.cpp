#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#define Max 10000100
using namespace std;

bool prime[Max];

void sieve(){
    for(int i=0;i<=Max;i++) prime[i]=true;
    prime[0]=false;
    prime[1]=false;
    int sq=sqrt(Max);
    for(int i=2;i<=sq;i++){
        if(prime[i]==true){
            for(int j=i*i;j<=Max;j+=i) prime[j]=false;
        }
    }
}

int rev(int n){
      int r=0,reverse_number;
      while(n>0){
            r=10*r+(n%10);
            n/=10;
      }
      reverse_number=r;
      return reverse_number;
}

int main(){
    sieve();
    int number;
    while(cin>>number and number!=EOF){
        if(prime[number]==false) printf("%d is not prime.\n",number);
        else {
            int n=rev(number);
            if(prime[n]==true and n!=number) printf("%d is emirp.\n",number);
            else printf("%d is prime.\n",number);
        }
    }
    return 0;
}
