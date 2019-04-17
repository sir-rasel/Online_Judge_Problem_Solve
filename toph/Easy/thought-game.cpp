#include<bits/stdc++.h>
using namespace std;

int main(){
    int test;
    scanf("%d",&test);
    while(test--){
         int a,b;
        scanf("%d %d",&a,&b);
        int c = (a+b)/2;
        if(c%2==0) printf("Sadia will be happy.\n");
        else printf("Oops!\n");
    }
    return 0;
}
