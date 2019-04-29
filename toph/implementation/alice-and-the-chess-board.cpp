#include<bits/stdc++.h>
using namespace std;

int main(){
    int test;
    scanf("%d",&test);
    while(test--){
        int a,b,c,d;
        scanf("%d %d %d %d",&a,&b,&c,&d);
        if(abs(a-c)==abs(b-d)) printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}
