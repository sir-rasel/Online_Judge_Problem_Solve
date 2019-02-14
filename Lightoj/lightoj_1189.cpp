#include <bits/stdc++.h>
using namespace std;

unsigned long long int fact[25];
void factcalculation(){
    fact[0]=1;
    for(int i=1;i<=20;i++){
        fact[i]=fact[i-1]*i;
    }
}

int main(){
    factcalculation();
    int test;
    scanf("%d",&test);
    for(int i=1;i<=test;i++){
        unsigned long long int number;
        scanf("%lld",&number);
        stack<int>ans;
        int temp = 20;
        while(temp>=0){
            if(fact[temp]<=number){
                number-=fact[temp];
                ans.push(temp);
            }
            temp--;
        }
        printf("Case %d: ",i);
        if(number!=0) printf("impossible\n");
        else{
            while(ans.size()!=1){
                printf("%d!+",ans.top());
                ans.pop();
            }
            printf("%d!\n",ans.top());
            ans.pop();
        }
    }
    return 0;
}
