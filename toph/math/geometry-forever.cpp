#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    if(a<b) swap(a,b);
    printf("%d\n",2*b-1);
    return 0;
}
