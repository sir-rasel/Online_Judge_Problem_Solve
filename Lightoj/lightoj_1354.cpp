#include <bits/stdc++.h>
using namespace std;

int binaryToDecimal(int n){
    int value=0;
    for(int i=0;n;i++){
        int r = n%10;
        value+=r*(1<<i);
        n/=10;
    }
    return value;
}


int main(){
    int test;
    scanf("%d",&test);
    char ch;
    for(int c=1;c<=test;c++){
        int number[5],binary;
        for(int i=0;i<4;i++){
            if(i<3) scanf("%d%c",&number[i],&ch);
            else scanf("%d",&number[i]);
        }
        bool flag = true;
        for(int i=0;i<4;i++){
            if(i<3) scanf("%d%c",&binary,&ch);
            else scanf("%d",&binary);
            int ans = binaryToDecimal(binary);
            if(ans!=number[i]) flag=false;
        }
        if(flag) printf("Case %d: Yes\n",c);
        else printf("Case %d: No\n",c);
    }
    return 0;
}
