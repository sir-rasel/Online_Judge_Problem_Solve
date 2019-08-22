#include<bits/stdc++.h>
using namespace std;

bool checkMeet(int virat,int rohit,int m,int mod){
    if( (virat>=m and rohit>=m) )
        if( (virat%mod) == (rohit%mod) ) return true;
    return false;
}

int main(){
    int test;
    scanf("%d",&test);
    while(test--){
        int n,m,s,p,q;
        scanf("%d %d %d %d %d",&n,&m,&s,&p,&q);
        int mod = n-m+1;
        int rohit=1,virat=1,meetTime=0;
        for(int i=1;i<=s;i++){
            virat+=p;
            rohit+=q;

            if(checkMeet(virat,rohit,m,mod)) meetTime++;
        }
        printf("%d\n",meetTime);
    }
    return 0;
}
