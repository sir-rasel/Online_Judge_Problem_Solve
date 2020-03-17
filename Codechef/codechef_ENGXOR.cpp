#include<bits/stdc++.h>
using namespace std;

int brianKarninghamSetBitCount(int n){
    int counter = 0;
    while(n){
        n&=(n-1);
        counter++;
    }
    return counter;
}

int main(){
    int test;
    scanf("%d",&test);
    while(test--){
        int n,q;
        scanf("%d %d",&n,&q);
        int odd=0,even=0;
        for(int i=0;i<n;i++){
            int num;
            scanf("%d",&num);
            if(brianKarninghamSetBitCount(num)%2==0) even++;
            else odd++;
        }

        while(q--){
            int p;
            scanf("%d",&p);
            int flag = brianKarninghamSetBitCount(p)%2;
            if(flag)
                printf("%d %d\n",odd,even);
            else
                printf("%d %d\n",even,odd);
        }
    }
    return 0;
}
