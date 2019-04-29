#include<bits/stdc++.h>
using namespace std;

bool check(int a,int b,int c){
    if(a+b>=c and a+c>=b and b+c>=a) return true;
    else return false;
}

int main(){
    int test;
    scanf("%d",&test);
    while(test--){
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        if(check(a,b,c)) printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}
