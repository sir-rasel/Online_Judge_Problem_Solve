#include<bits/stdc++.h>
using namespace std;

int main(){
    int num;
    scanf("%d",&num);
    bool flag = true;
    int a;
    scanf("%d",&a);
    for(int i=1;i<num;i++){
        int b;
        scanf("%d",&b);
        if(b<a) flag=false;
        a = b;
    }
    if(flag) printf("Yes\n");
    else printf("No\n");
    return 0;
}
