#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;

int main(){
    int test;
    scanf("%d",&test);
    while(test--){
        int n;
        scanf("%d",&n);

        int turn=0;
        if(n==1) turn = 1;
        else if(n%2 or n==2) turn = 0;
        else{
            int f=0,g=0;
            while(n%2==0){
                g++;
                n/=2;
            }
            for(int i=3; i*i<=n; i+=2){
                if(n%i==0){
                    while(n%i==0){
                        n/=i;
                        f++;
                    }
                }
            }

            if(n>1 && n%2) f++;
            if(f==0 || (f==1 && g==1)) turn = 1;
            else turn = 0;
        }

        if(turn%2==0) printf("Ashishgup\n");
        else printf("FastestFinger\n");
    }
    return 0;
}
