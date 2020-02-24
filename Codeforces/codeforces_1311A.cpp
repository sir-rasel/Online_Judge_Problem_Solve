#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    scanf("%d",&n);
    while(n--){
        int a,b;
        scanf("%d %d",&a,&b);
        if(a>=b){
            int diff = abs(a-b);
            if(diff==0) printf("0\n");
            else if(diff%2==0) printf("1\n");
            else printf("2\n");
        }
        else{
            int diff = abs(a-b);
            if(diff==0) printf("0\n");
            else if(diff%2==0) printf("2\n");
            else printf("1\n");
        }
    }
    return 0;
}
